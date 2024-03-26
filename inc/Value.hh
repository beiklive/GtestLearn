// 使用 ASSERT_EQ 断言宏的示例
TEST(TestAssertions, TestASSERT_EQ) {
    int val1 = 5;
    int val2 = 5;
    ASSERT_EQ(val1, val2); // 断言 val1 等于 val2，如果不相等，将导致致命错误并终止测试
}

// 使用 ASSERT_GE 断言宏的示例
TEST(TestAssertions, TestASSERT_GE) {
    int val1 = 10;
    int val2 = 5;
    ASSERT_GE(val1, val2); // 断言 val1 大于等于 val2，如果不满足条件，将导致致命错误并终止测试
}

// 使用 ASSERT_GT 断言宏的示例
TEST(TestAssertions, TestASSERT_GT) {
    int val1 = 10;
    int val2 = 5;
    ASSERT_GT(val1, val2); // 断言 val1 大于 val2，如果不满足条件，将导致致命错误并终止测试
}

// 使用 ASSERT_LE 断言宏的示例
TEST(TestAssertions, TestASSERT_LE) {
    int val1 = 5;
    int val2 = 10;
    ASSERT_LE(val1, val2); // 断言 val1 小于等于 val2，如果不满足条件，将导致致命错误并终止测试
}

// 使用 ASSERT_LT 断言宏的示例
TEST(TestAssertions, TestASSERT_LT) {
    int val1 = 15;
    int val2 = 10;
    ASSERT_LT(val1, val2); // 断言 val1 小于 val2，如果不满足条件，将导致致命错误并终止测试
}

// 使用 ASSERT_NE 断言宏的示例
TEST(TestAssertions, TestASSERT_NE) {
    int val1 = 15;
    int val2 = 10;
    ASSERT_NE(val1, val2); // 断言 val1 不等于 val2，如果相等，将导致致命错误并终止测试
}

// 使用 EXPECT_EQ、EXPECT_GE、EXPECT_GT、EXPECT_LE、EXPECT_LT、EXPECT_NE 等宏的示例可以类似地编写，只是在条件不符合预期时不会导致致命错误，而是输出错误信息并继续执行后续测试。