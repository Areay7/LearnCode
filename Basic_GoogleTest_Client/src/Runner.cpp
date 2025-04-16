#include "Runner.h"

Runner::Runner()
{
    std::cout << "Runner ! " << std::endl;
    test();
}

Runner::~Runner()
{

}

void Runner::test()
{
    int count = 2;
    for (size_t i = 0; i < count; i++)
    {
        m_IceClient.sendRequest("www.baidu7.com");
        m_IceClient.echoEx(777);
    }

    m_RabbitMQClient = std::make_shared<RabbitMQClient>(
        "areay7.cn",    // RabbitMQ 服务器地址
        5672,           // 端口
        "admin",        // 用户名
        "123",          // 密码
        "my_queue"      // 队列名
    );

    // 启动消费，并定义回调函数
    m_RabbitMQClient->startConsuming([](const std::string& message) {
        std::cout << "Received message: " << message.c_str();
        
        // 解析 Protobuf 消息（如果需要）
        // Message msg;
        // if (msg.ParseFromString(message)) {
        //     qDebug() << "ID: " << msg.id();
        // }
    });

}