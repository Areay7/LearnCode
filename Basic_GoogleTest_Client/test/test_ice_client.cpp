#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "IceClient.h"

using ::testing::_;
using ::testing::Throw;

class IceClientTest : public ::testing::Test {
protected:
    IceClient client;
};

TEST_F(IceClientTest, SendRequestWithValidURL) {
    EXPECT_NO_THROW(client.sendRequest("tcp -h localhost -p 10000"));
}

TEST_F(IceClientTest, EchoExWithPositiveNumber) {
    EXPECT_NO_THROW(client.echoEx(5));
}
