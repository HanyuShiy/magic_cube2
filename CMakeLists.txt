cmake_minimum_required(VERSION 3.29)
project(magic_cube2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(magic_cube2
        angle.cpp
        position.cpp
        orientation.cpp
        cubelet.cpp
        main.cpp
        cubelet_face.cpp
        colored_cubelet.cpp
        face.cpp)
