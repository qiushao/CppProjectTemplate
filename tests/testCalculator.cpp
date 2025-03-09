#include "Calculator.h"
#include <gtest/gtest.h>

TEST(CalculatorTest, AddTest) {
    EXPECT_EQ(Calculator::add(2, 3), 5);
    EXPECT_EQ(Calculator::add(-1, 1), 0);
    EXPECT_EQ(Calculator::add(-2, -3), -5);
}

TEST(CalculatorTest, SubtractTest) {
    EXPECT_EQ(Calculator::subtract(5, 3), 2);
    EXPECT_EQ(Calculator::subtract(1, 1), 0);
    EXPECT_EQ(Calculator::subtract(-2, -3), 1);
}

TEST(CalculatorTest, MultiplyTest) {
    EXPECT_EQ(Calculator::multiply(2, 3), 6);
    EXPECT_EQ(Calculator::multiply(-1, 1), -1);
    EXPECT_EQ(Calculator::multiply(-2, -3), 6);
}

TEST(CalculatorTest, DivideTest) {
    EXPECT_EQ(Calculator::divide(10, 2), 5.0);
    EXPECT_EQ(Calculator::divide(1, 1), 1.0);
    EXPECT_EQ(Calculator::divide(-2, -3), 0.6666666666666666);
    EXPECT_EQ(Calculator::divide(5, 0), 0);// Test division by zero
}