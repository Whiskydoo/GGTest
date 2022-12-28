#include<iostream>
#include<gtest/gtest.h>
#include "OperationLib.hpp"

TEST(TestSample2, TestMulti)
{
    ASSERT_EQ(multi(2,2), multi2(2,2));
    ASSERT_LT(add(2,3),multi(2,3));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}