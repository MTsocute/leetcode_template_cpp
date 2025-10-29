cmake_minimum_required(VERSION 4.0)
project(leetcode)

set(CMAKE_CXX_STANDARD 26)

find_package(fmt REQUIRED)

add_executable(leetcode main.cpp
        main.h)

target_link_libraries(leetcode PRIVATE fmt::fmt)
