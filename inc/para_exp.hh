// Copyright (c) RealCoolEngineer. 2024. All rights reserved.
// Author: beiklive
// Date: 2024-03-26
#ifndef INC_PARA_EXP_HH_
#define INC_PARA_EXP_HH_
#include <iostream>

#if 1
// 测试代码
bool IsPrime(int n) // 检查 n 是否为质数
{
    if (n <= 1) return false;
    if (n % 2 == 0) return n == 2;
    for (int i = 3; ; i += 2) {
        if (i > n / i) break;
        if (n % i == 0) return false;
    }
    return true;
}

class IsPrimeParamTest : public::testing::TestWithParam<int>
{
};

TEST_P(IsPrimeParamTest, HandleTrueReturn)
{
    int n = GetParam();
    EXPECT_TRUE(IsPrime(n)) << "value : " << n;
}

INSTANTIATE_TEST_CASE_P(ValueList, IsPrimeParamTest, testing::Values(3, 5, 11, 23, 17));
INSTANTIATE_TEST_CASE_P(RangeList, IsPrimeParamTest, testing::Range(1, 5));
#endif

#if 1
// 定义一个简单的函数，用于将两个数相加
template<typename T>
T add(T a, T b) {
    return a + b;
}

// 创建一个测试夹具
template<typename T>
class AddTest : public testing::Test {
protected:
    T value1;
    T value2;
    T expectedSum;

    void SetUp() override {
        // 设置测试数据
        value1 = T{ 3 };
        value2 = T{ 5 };
        expectedSum = T{ 8 };
    }
};

// 定义类型参数化的测试套件
TYPED_TEST_SUITE_P(AddTest);

// 定义测试用例，参数化类型为整型和浮点型
TYPED_TEST_P(AddTest, AddsNumbers) {
    // 使用测试夹具中设置的数据进行测试
    EXPECT_EQ(this->expectedSum, add(this->value1, this->value2));
}

// 注册测试用例，并指定要测试的类型
REGISTER_TYPED_TEST_SUITE_P(AddTest, AddsNumbers);

// 指定要测试的类型列表
using MyTypes = testing::Types<int, float, double, long long>;

// 实例化测试套件
INSTANTIATE_TYPED_TEST_SUITE_P(My, AddTest, MyTypes);

#endif


#endif  // INC_PARA_EXP_HH_
