#include "RabbitMQClient.h"

RabbitMQClient::RabbitMQClient(const std::string &host,
                               int port,
                               const std::string &username,
                               const std::string &password,
                               const std::string &queue_name) : host_(host), port_(port), username_(username), password_(password), queue_name_(queue_name)
{
    std::cout << "RabbitMQClient" << std::endl;
    conn_ = amqp_new_connection();
    socket_ = amqp_tcp_socket_new(conn_);
    if (!socket_)
    {
        std::cout << "Failed to create AMQP socket";
        return;
    }
}

RabbitMQClient::~RabbitMQClient()
{
    std::cout << "~RabbitMQClient" << std::endl;
    close();
}

bool RabbitMQClient::connect()
{
    std::cout << "connect" << std::endl;
    if (amqp_socket_open(socket_, host_.c_str(), port_))
    {
        std::cout << "Failed to connect to RabbitMQ server";
        return false;
    }

    amqp_rpc_reply_t login_reply = amqp_login(
        conn_,
        "/",    // vhost
        0,      // channel_max
        131072, // frame_max
        0,      // heartbeat
        AMQP_SASL_METHOD_PLAIN,
        username_.c_str(),
        password_.c_str());

    if (login_reply.reply_type != AMQP_RESPONSE_NORMAL)
    {
        std::cout << "Failed to login to RabbitMQ";
        return false;
    }

    return true;
}

bool RabbitMQClient::declareQueue()
{
    std::cout << "declareQueue" << std::endl;
    amqp_channel_open(conn_, 1);
    amqp_rpc_reply_t channel_reply = amqp_get_rpc_reply(conn_);
    if (channel_reply.reply_type != AMQP_RESPONSE_NORMAL)
    {
        std::cout << "Failed to open channel";
        return false;
    }

    amqp_queue_declare(
        conn_,
        1, // channel
        amqp_cstring_bytes(queue_name_.c_str()),
        0, // passive
        1, // durable
        0, // exclusive
        0, // auto_delete
        amqp_empty_table);

    amqp_rpc_reply_t declare_reply = amqp_get_rpc_reply(conn_);
    if (declare_reply.reply_type != AMQP_RESPONSE_NORMAL)
    {
        std::cout << "Failed to declare queue";
        return false;
    }

    return true;
}

void RabbitMQClient::close()
{
    std::cout << "close" << std::endl;
    if (conn_) {
        amqp_channel_close(conn_, 1, AMQP_REPLY_SUCCESS);
        amqp_connection_close(conn_, AMQP_REPLY_SUCCESS);
        amqp_destroy_connection(conn_);
        conn_ = nullptr;
    }
}

void RabbitMQClient::startConsuming(std::function<void(const std::string &)> callback)
{
    if (!connect() || !declareQueue())
    {
        std::cout << "Failed to initialize RabbitMQ connection";
        return;
    }

    amqp_basic_consume(
        conn_,
        1, // channel
        amqp_cstring_bytes(queue_name_.c_str()),
        amqp_cstring_bytes(""), // consumer_tag
        0,                      // no_local
        1,                      // no_ack
        0,                      // exclusive
        amqp_empty_table);

    amqp_rpc_reply_t consume_reply = amqp_get_rpc_reply(conn_);
    if (consume_reply.reply_type != AMQP_RESPONSE_NORMAL)
    {
        std::cout << "Failed to start consuming";
        return;
    }

    while (true)
    {
        amqp_envelope_t envelope;
        amqp_rpc_reply_t res = amqp_consume_message(conn_, &envelope, nullptr, 0);

        if (res.reply_type != AMQP_RESPONSE_NORMAL)
        {
            std::cout << "Failed to consume message";
            break;
        }

        std::string message_body(
            reinterpret_cast<char *>(envelope.message.body.bytes),
            envelope.message.body.len);

        callback(message_body); // 调用回调函数处理消息

        amqp_destroy_envelope(&envelope);
    }
}