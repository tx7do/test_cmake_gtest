
enable_testing()

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量中
aux_source_directory(./src TEST_SRCS)

include_directories(../include)

# 指定生成目标文件
add_executable(
        library_test
        ${TEST_SRCS}
)

# 依赖库
target_link_libraries(
        library_test
        test_cmake_gtest
        gtest_main
        gtest
        pthread
)

include(GoogleTest)

gtest_discover_tests(library_test)
