//
// Created by Hanyu Shi on 07.08.25.
//

#ifndef MAGIC_CUBE2_CUBE_H
#define MAGIC_CUBE2_CUBE_H
#include <array>

#include "colored_cubelet.h"
#include "layer.h"
#include "surface.h"


class Cube
{
    std::array<ColoredCubelet, 26> cubelets;

public:
    explicit Cube();

    void coloring();

    Surface getFront() const;
    Surface getBack() const;
    Surface getRight() const;
    Surface getLeft() const;
    Surface getTop() const;
    Surface getBottom() const;
};


#endif //MAGIC_CUBE2_CUBE_H
