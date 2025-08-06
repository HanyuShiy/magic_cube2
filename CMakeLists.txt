cmake_minimum_required(VERSION 4.0)
project(magic_cube2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(magic_cube2
        angle.cpp
        position.cpp
        orientation.cpp
        orientation.h)
