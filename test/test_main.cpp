#include <gtest/gtest.h>

// #include "../inc/Condition.hh"      // 条件比较的断言
// #include "../inc/Value.hh"          // 数值比较的断言
// #include "../inc/assert_exp.hh"     // 断言相关的测试代码
// #include "../inc/event_exp.hh"     // 事件相关的测试代码
#include "../inc/para_exp.hh"     // 参数化相关的测试代码





int main(int argc, char **argv) {

// 全局事件测试代码
#ifdef GLOBAL_EVENT_EXP
    testing::AddGlobalTestEnvironment(new GlobalEventExp);
#endif 


    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
