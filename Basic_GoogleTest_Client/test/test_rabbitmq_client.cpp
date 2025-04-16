#include <gtest/gtest.h>
#include "RabbitMQClient.h"

class RabbitMQClientTest : public ::testing::Test {
protected:
    void SetUp() override {
        // 使用实际构造参数
        client = std::make_unique<RabbitMQClient>(
            "localhost", 5672, "guest", "guest", "test_queue");
    }
    std::unique_ptr<RabbitMQClient> client;
};

TEST_F(RabbitMQClientTest, StartConsumingWithValidCallback) {
    bool callbackCalled = false;
    client->startConsuming([&](const std::string& msg) {
        callbackCalled = true;
    });
    
    // 这里需要实际发送测试消息到队列
    // 或者使用Mock AMQP连接（推荐）
    EXPECT_TRUE(callbackCalled);
}

TEST_F(RabbitMQClientTest, CloseConnection) {
    EXPECT_NO_THROW(client->close());
}
