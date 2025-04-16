#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "math_utils.h"

using ::testing::AllOf;
using ::testing::Gt;
using ::testing::Lt;


TEST(MathTest666, Factorial) {
    EXPECT_EQ(Factorial(0), 1);
    EXPECT_EQ(Factorial(3), 6);
}

TEST(MathTest888, RangeCheck) {
    EXPECT_TRUE(IsBetween5And10(7));
    EXPECT_FALSE(IsBetween5And10(11));
}

TEST(SubMethodTest, SubMethod)
{
    EXPECT_THAT(SubMethod(10, 2), AllOf(Gt(2), Lt(10)));
}
// std::vector<int> vec = {1, 2, 3};
