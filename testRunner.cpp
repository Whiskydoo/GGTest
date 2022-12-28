#include<iostream>
#include<gtest/gtest.h>
#include "OperationLib.hpp"

TEST(TestSample2, TestMulti)
{
    ASSERT_EQ(multi(2,2), multi2(2,2));
    ASSERT_LT(add(2,3),multi(2,3));
}
TEST(ExceptionTest, ANY_THROW)
{
    int a = 0;
    int b = 5;
    ASSERT_ANY_THROW(dive(b,a));
}
TEST(ExceptionTest, THROW)
{
    int a = 0;
    int b = 5;
    ASSERT_THROW(dive(b,a), std::runtime_error);
}
TEST(ExceptionTest, NO_THROW)
{
    int a = 1;
    int b = 5;
    ASSERT_NO_THROW(dive(b,a));
}


int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}