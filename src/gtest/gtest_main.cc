#include <gtest/gtest.h>
#include "test.h"


TEST(t1Test, IntTest)
{
	EXPECT_EQ(1, t1());
	EXPECT_EQ(2, t1());
}
TEST(t2Test, IntTest)
{
	EXPECT_EQ(1, t2());
	EXPECT_EQ(2, t2());
}
int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}