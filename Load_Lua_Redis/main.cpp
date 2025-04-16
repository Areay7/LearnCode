#include <QCoreApplication>
#include <QFile>
#include <QDebug>
#include <cpp_redis/cpp_redis>

// 读取Lua脚本文件内容
QString readLuaScript(const QString& filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open Lua script file:" << filePath;
        return "";
    }
    QTextStream in(&file);
    return in.readAll();
}

// 加载并执行Lua脚本
void testRedisLuaScript() {
    // 创建Redis客户端
    cpp_redis::client client;

    try {
        // 连接到Redis服务器
        client.connect("areay7.cn", 6379, [](const std::string& host, std::size_t port, cpp_redis::client::connect_state status) {
            if (status == cpp_redis::client::connect_state::dropped) {
                qDebug() << "Client disconnected from" << QString::fromStdString(host) << ":" << port;
            }
        });

        client.auth("123", [](const cpp_redis::reply& reply) {
            if (reply.is_error()) {
                qDebug() << "Authentication failed:" << QString::fromStdString(reply.as_string());
            } else {
                qDebug() << "Authentication successful";
            }
        });
        client.sync_commit(); // 等待认证完成

        // 读取Lua脚本
        QString scriptContent = readLuaScript("/Users/areay7/QtCode/HST_Code/Load_Lua_Redis/script.lua");
        if (scriptContent.isEmpty()) {
            qDebug() << "Failed to read Lua script";
            return;
        }

        // 1. 使用SCRIPT LOAD加载脚本并获取SHA1
        std::string luaScript = scriptContent.toStdString();
        auto loadFuture = client.script_load(luaScript);
        client.sync_commit();
        auto loadReply = loadFuture.get();

        if (!loadReply.is_string()) {
            qDebug() << "Failed to load script:" << QString::fromStdString(loadReply.as_string());
            return;
        }

        std::string sha1 = loadReply.as_string();
        qDebug() << "Script loaded with SHA1:" << QString::fromStdString(sha1);

        // 2. 检查脚本是否存在
        std::vector<std::string> scriptsToCheck;
        scriptsToCheck.push_back(sha1);

        auto existsFuture = client.script_exists(scriptsToCheck);
        client.sync_commit();
        auto existsReply = existsFuture.get();

        if (!existsReply.is_array() || existsReply.as_array().size() == 0) {
            qDebug() << "Invalid reply for script exists check";
            return;
        }

        if (existsReply.as_array()[0].is_integer() && existsReply.as_array()[0].as_integer() == 1) {
            qDebug() << "Script exists in cache";
        } else {
            qDebug() << "Script does not exist in cache";
            return;
        }

        // 3. 执行脚本
        std::vector<std::string> keys = {"test_hash"};
        std::vector<std::string> args = {"test_field", "test_value"};

        // 注意: evalsha 需要4个参数: sha1, numkeys, keys, args
        auto evalFuture = client.evalsha(sha1, static_cast<int>(keys.size()), keys, args);
        client.sync_commit();
        auto evalReply = evalFuture.get();

        if (evalReply.is_string()) {
            qDebug() << "Script executed successfully. Result:" << QString::fromStdString(evalReply.as_string());
        } else if (evalReply.is_error()) {
            // qDebug() << "Script execution error:" << QString::fromStdString(evalReply.as_error());
        } else {
            qDebug() << "Unexpected script execution result type";
        }

        // 4. 验证结果
        auto hgetFuture = client.hget("test_hash", "test_field");
        client.sync_commit();
        auto hgetReply = hgetFuture.get();

        if (hgetReply.is_string()) {
            qDebug() << "Verification - Field value:" << QString::fromStdString(hgetReply.as_string());
        } else if (hgetReply.is_null()) {
            qDebug() << "Field does not exist";
        } else {
            qDebug() << "Unexpected verification result type";
        }

    } catch (const std::exception& e) {
        qDebug() << "Redis operation failed:" << e.what();
    }

    client.disconnect();
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    qDebug() << "Starting Redis Lua script test...";
    testRedisLuaScript();
    qDebug() << "Test completed.";

    return a.exec();
}
