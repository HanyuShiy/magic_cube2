cmake_minimum_required(VERSION 4.0)
project(magic_cube2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(magic_cube2
        angle.cpp
        angle.h
        main.cpp
        position.cpp
        position.h
        orientation.cpp
        orientation.h
        cubelet.cpp
        cubelet.h
        cubelet_face.cpp
        cubelet_face.h
        color.h
        colored_cubelet.cpp
        colored_cubelet.h)
