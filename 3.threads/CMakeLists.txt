cmake_minimum_required(VERSION 3.2)
project(3_threads)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
set(SOURCE_FILES main.cpp)

add_executable(3_threads ${SOURCE_FILES})

