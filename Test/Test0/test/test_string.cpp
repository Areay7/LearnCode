#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "string_utils.h"

using ::testing::StartsWith;

TEST(StringTest777, ProcessString) {
    EXPECT_EQ(ProcessString(""), "Empty");
    EXPECT_THAT(ProcessString("World"), StartsWith("Hello"));
}
