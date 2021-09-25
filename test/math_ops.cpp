#include "gtest/gtest.h"

extern "C"
{
    #include "math_ops.h"
}

TEST(base, expected_ok)
{
    ASSERT_EQ(1, 1);
}

TEST(base, expected_not_ok)
{
    ASSERT_NE(1, 0);
}

TEST(sum, sum_zero_result)
{
    int a = 18, b = -18;
    ASSERT_EQ(sum(a,b), 0);
}

TEST(sum, sum_overflow)
{
    int a = 1500000000;
    ASSERT_LT(sum(a, a), a);
}

TEST(swap, swap_normal)
{
    int a = 3000000000, a1, b = 52, b1;
    a1 = a;
    b1 = b;
    swap(&a, &b);
    ASSERT_EQ(a, b1);
    ASSERT_EQ(b, a1);
}

TEST(swap, swap_null_pointer)
{
    int *a = NULL, b = 7;
    swap(a, &b);
    ASSERT_FALSE(a);
    ASSERT_EQ(b, 7);
}

TEST(square_root, square_root_normal)
{
    double a = 36.0, ret;
    ret = square_root(a);
    ASSERT_EQ(ret, 6.0);
    a = 0.0;
    ret = square_root(a);
    ASSERT_EQ(ret, 0.0);
    a = 1.0;
    ret = square_root(a);
    ASSERT_EQ(ret, 1.0);
    a = 2.0;
    ret = square_root(a);
    ASSERT_NEAR(ret, 1.42, 0.01);
}

TEST(square_root, square_root_negative_number)
{
    double a = -53.0, ret;
    ret = square_root(a);
    ASSERT_EQ(ret, -1.0);
}