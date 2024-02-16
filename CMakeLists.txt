cmake_minimum_required(VERSION 3.27)
project(c)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(c
        01-LineList-动态分配.c
        01-testLineList-静态分配.c
        HelloWorld.cpp)
