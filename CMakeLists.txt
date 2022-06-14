# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.0)

# 项目名称
project(test_cmake_gtest)

# C++版本
set(CMAKE_CXX_STANDARD 20)

# 设置动态库的输出目录
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
# 设置静态库的输出目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
# 设置可执行文件的输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# 包含include目录，里面都是头文件
include_directories(include)

# 将 src 目录下的所有源文件加入后面的变量之中
aux_source_directory(src DIR_LIB_SRCS)

# 构建生成动态库
add_library(${PROJECT_NAME} SHARED ${DIR_LIB_SRCS})
# 构建生成静态库
# add_library(${PROJECT_NAME}_static STATIC ${DIR_LIB_SRCS})

# 添加子目录
add_subdirectory(testsuite)
