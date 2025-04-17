#include <iostream>
#include <string>
#include <curl/curl.h>

// 用于libcurl读取数据的回调函数
static size_t payload_source(void *ptr, size_t size, size_t nmemb, void *userp) {
    std::string *payload = static_cast<std::string*>(userp);
    
    if(size * nmemb < 1 || payload->empty())
        return 0;
    
    size_t len = size * nmemb;
    if(len > payload->size())
        len = payload->size();
    
    memcpy(ptr, payload->c_str(), len);
    payload->erase(0, len);
    
    return len;
}

// 发送邮件函数
bool send_email(
    const std::string& smtp_server,
    int port,
    const std::string& username,
    const std::string& password,
    const std::string& from,
    const std::string& to,
    const std::string& subject,
    const std::string& body,
    bool use_ssl = true
) {
    CURL *curl;
    CURLcode res = CURLE_OK;
    struct curl_slist *recipients = NULL;
    
    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();
    
    if(!curl) {
        std::cerr << "Failed to initialize CURL" << std::endl;
        return false;
    }
    
    curl_easy_setopt(curl, CURLOPT_CAINFO, "/opt//homebrew/etc/openssl@3/cert.pem");
    // curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
    // curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

    // 构建SMTP URL
    std::string smtp_url = (use_ssl ? "smtps://" : "smtp://") + smtp_server + ":" + std::to_string(port);
    
    // 设置基本选项
    curl_easy_setopt(curl, CURLOPT_URL, smtp_url.c_str());
    curl_easy_setopt(curl, CURLOPT_MAIL_FROM, from.c_str());
    
    // 添加收件人
    recipients = curl_slist_append(recipients, to.c_str());
    curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, recipients);
    
    // 设置认证信息
    curl_easy_setopt(curl, CURLOPT_USERNAME, username.c_str());
    curl_easy_setopt(curl, CURLOPT_PASSWORD, password.c_str());
    
    // 对于自签名证书，可以跳过验证（生产环境不推荐）
    // curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
    // curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
    
    // 构建邮件内容
    std::string email_text = 
        "To: " + to + "\r\n"
        "From: " + from + "\r\n"
        "Subject: " + subject + "\r\n"
        "\r\n"
        + body + "\r\n";
    
    // 设置读取回调
    curl_easy_setopt(curl, CURLOPT_READFUNCTION, payload_source);
    curl_easy_setopt(curl, CURLOPT_READDATA, &email_text);
    curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
    
    // 设置超时
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10L);
    
    // 发送邮件
    res = curl_easy_perform(curl);
    
    // 检查错误
    if(res != CURLE_OK) {
        std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
    }
    
    // 清理
    curl_slist_free_all(recipients);
    curl_easy_cleanup(curl);
    curl_global_cleanup();
    
    return res == CURLE_OK;
}

int main() {
    // SMTP服务器配置
    std::string smtp_server = "smtp.163.com";
    int port = 465;  // 通常SSL使用465端口，非SSL使用25端口
    std::string username = "areay7@163.com";
    std::string password = "xxxxxx";
    
    // 邮件内容
    std::string from = "areay7@163.com";
    std::string to = "2507549477@qq.com";
    std::string subject = "Test Email from C++";
    std::string body = "Hello Areay7 ! This is a test email sent using C++ and libcurl.";
    
    // 发送邮件
    bool success = send_email(smtp_server, port, username, password, 
                             from, to, subject, body, true);
    
    if(success) {
        std::cout << "Email sent successfully!" << std::endl;
    } else {
        std::cerr << "Failed to send email." << std::endl;
    }
    
    return success ? 0 : 1;
}