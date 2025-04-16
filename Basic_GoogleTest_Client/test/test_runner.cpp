#include <gtest/gtest.h>
#include "Runner.h"

class RunnerTest : public ::testing::Test {
protected:
    Runner runner;
};

TEST_F(RunnerTest, TestMethodExecutesWithoutException) {
    EXPECT_NO_THROW(runner.test());
}
