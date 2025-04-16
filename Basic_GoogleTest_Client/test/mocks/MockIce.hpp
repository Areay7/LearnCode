// test/mocks/MockIce.hpp
#pragma once
#include <gmock/gmock.h>
#include "Ice/Ice.h"

class MockIceInterface {
public:
    MOCK_METHOD(bool, initialize, (const std::string& endpoint), ());
    MOCK_METHOD(void, send, (const std::string& data), ());
};
