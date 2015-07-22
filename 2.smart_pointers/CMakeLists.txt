cmake_minimum_required(VERSION 3.2)
project(2_smart_pointers)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(2_smart_pointers ${SOURCE_FILES})