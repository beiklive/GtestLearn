
#if 1
TEST(TestCase, OutPutTest)
{
    int x[5] = {1,2,3,4,5};
    int y[5] = {1,2,4,4,5};

    for (int i = 0; i < 5; ++i)
    {
        EXPECT_EQ(x[i], y[i]);
        EXPECT_EQ(x[i], y[i]) << "At index i = " << i;
    }
}

TEST(ExplicitTest, Demo)
{
ADD_FAILURE() << "ADD_FAILURE() 1";// 打印 Failed，继续往下执行。
SUCCEED();  // 不打印
FAIL() << "FAIL()";// 打印 Failed，不往下执行该案例。
ADD_FAILURE() << "ADD_FAILURE() 2";

}
#endif