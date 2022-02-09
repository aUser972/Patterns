cmake_minimum_required(VERSION 3.0)
project(patterns)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c1y")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O0 -g")

file(GLOB SOURCES   "factory_method.hpp"
                    "main.cpp")

add_executable(patterns ${SOURCES})