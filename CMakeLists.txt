cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(238_ArrayProductExceptSelf VERSION 1.0.0)

set(SRC_FILES src/solution.cpp)
add_executable(238_ArrayProductExceptSelf src/main.cpp ${SRC_FILES})

target_include_directories(238_ArrayProductExceptSelf PUBLIC inc)

