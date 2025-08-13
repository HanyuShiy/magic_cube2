//
// Created by Hanyu Shi on 13.08.25.
//

#ifndef MAGIC_CUBE2_FACE_H
#define MAGIC_CUBE2_FACE_H
#include <array>

#include "color.h"


class Face
{
public:
    std::array<std::array<Color, 3>, 3> colors;

    Face(const std::array<std::array<Color, 3>, 3>& colors);

    void print() const;
};


#endif //MAGIC_CUBE2_FACE_H
