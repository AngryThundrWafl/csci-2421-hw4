cmake_minimum_required(VERSION 3.3)
project(PinaHW4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp node.cpp)
add_executable(PinaHW4 ${SOURCE_FILES})