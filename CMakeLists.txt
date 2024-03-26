cmake_minimum_required(VERSION 3.13)
project(MyProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
if(CMAKE_BUILD_TYPE MATCHES "Debug")
    set(CMAKE_CXX_FLAGS_DEBUG "/MTd")  # 静态链接的 Debug 版本
else()
    set(CMAKE_CXX_FLAGS_RELEASE "/MT")  # 静态链接的 Release 版本
endif()

# 添加可执行程序 main
add_executable(main main.cpp)

# 添加可执行程序 test_main
add_executable(test_main test/test_main.cpp)

# 设置测试
enable_testing()
add_test(NAME MyTest COMMAND test_main)

# 添加 Google Test 子目录
add_subdirectory(thirdparty/googletest)

# 将测试程序链接到 Google Test 库
target_link_libraries(test_main gtest gtest_main)
