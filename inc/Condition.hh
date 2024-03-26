// 使用 ASSERT_TRUE 断言宏的示例
TEST(TestAssertions, TestASSERT_TRUE) {
    bool condition = true;
    ASSERT_TRUE(condition); // 断言条件为真，如果条件为假，将导致致命错误并终止测试
}

// 使用 ASSERT_FALSE 断言宏的示例
TEST(TestAssertions, TestASSERT_FALSE) {
    bool condition = false;
    ASSERT_FALSE(condition); // 断言条件为假，如果条件为真，将导致致命错误并终止测试
}

// 使用 EXPECT_TRUE 断言宏的示例
TEST(TestAssertions, TestEXPECT_TRUE) {
    bool condition = true;
    EXPECT_TRUE(condition); // 断言条件为真，如果条件为假，将继续执行后续测试
}

// 使用 EXPECT_FALSE 断言宏的示例
TEST(TestAssertions, TestEXPECT_FALSE) {
    bool condition = false;
    EXPECT_FALSE(condition); // 断言条件为假，如果条件为真，将继续执行后续测试
}