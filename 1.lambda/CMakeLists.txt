cmake_minimum_required(VERSION 3.2)
project(c1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(c1 ${SOURCE_FILES})
add_definitions(-std=c++11)