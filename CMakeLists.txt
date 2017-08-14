cmake_minimum_required(VERSION 3.8)
project(overloads)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Person.cpp Person.h)
add_executable(overloads ${SOURCE_FILES})