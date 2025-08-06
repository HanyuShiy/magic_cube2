//
// Created by Hanyu Shi on 07.08.25.
//

#ifndef MAGIC_CUBE2_FACE_H
#define MAGIC_CUBE2_FACE_H
#include <array>

#include "Color.h"


class Surface
{
    std::array<std::array<Color, 3>, 3> colors;

public:
    Surface() = default;

    void print();
};


#endif //MAGIC_CUBE2_FACE_H
