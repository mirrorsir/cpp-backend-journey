# CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)

# 项目信息
project(StudentProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加可执行文件目标
# add_executable(目标名 源文件1 源文件2 ...)
add_executable(app week1/main.cpp week1/Student.cpp)
