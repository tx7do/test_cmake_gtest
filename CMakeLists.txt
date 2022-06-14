# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.0)

# 项目名称
project(test_cmake_gtest)

# C++版本
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量中
aux_source_directory(./src LIB_SRCS)

# 指定生成的库文件的名称
add_library(test_cmake_gtest SHARED ${LIB_SRCS})

#
add_subdirectory(testsuite)
