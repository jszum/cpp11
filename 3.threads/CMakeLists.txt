cmake_minimum_required(VERSION 3.2)
project(3_threads)

set(SOURCE_FILES main.cpp)
add_definitions(-std=c++11)
add_definitions(-pthread)
add_executable(3_threads ${SOURCE_FILES})

