cmake_minimum_required(VERSION 4.0)
project(magic_cube2)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)

add_executable(magic_cube2
        angle.cpp
        position.cpp
        orientation.cpp
        orientation.h
        cubelet.cpp
        cubelet.h
        main.cpp
        cubelet_face.cpp
        cubelet_face.h
        colored_cubelet.cpp
        colored_cubelet.h
        Color.h
        cube.cpp
        cube.h
        layer.cpp
        layer.h)
