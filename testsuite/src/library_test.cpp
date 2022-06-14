#include <gtest/gtest.h>
#include <string>
#include "library.h"

TEST(HelloTest, BasicAssertions) {
	EXPECT_STRNE("hello", "world");
	EXPECT_EQ(7 * 6, 42);
	EXPECT_EQ(std::string(say()), "Hello, World!");
}

TEST(SumTest, BasicAssertions) {
	EXPECT_EQ(sum(1,2), 3);
}
