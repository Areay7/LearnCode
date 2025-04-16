#include <iostream>
#include <string>
#include <functional>
#include <rabbitmq-c/amqp.h>
#include <rabbitmq-c/amqp_tcp_socket.h>

class RabbitMQClient
{
public:
    RabbitMQClient(const std::string &host,
                   int port,
                   const std::string &username,
                   const std::string &password,
                   const std::string &queue_name);
    ~RabbitMQClient();

    void startConsuming(std::function<void(const std::string &)> callback);
    void close();

private:
    amqp_connection_state_t conn_; // AMQP 连接
    amqp_socket_t *socket_;        // AMQP Socket
    std::string host_;             // RabbitMQ 服务器地址
    int port_;                     // RabbitMQ 服务器端口
    std::string username_;         // 用户名
    std::string password_;         // 密码
    std::string queue_name_;       // 队列名

    bool connect();
    bool declareQueue();
};