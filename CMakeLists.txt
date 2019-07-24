cmake_minimum_required(VERSION 3.3)
project(STLContainersDebugSize)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES #[[main.cpp]] header.h source.cpp)
add_executable(STLContainersDebugSize ${SOURCE_FILES})