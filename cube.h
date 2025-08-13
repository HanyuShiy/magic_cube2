//
// Created by Hanyu Shi on 13.08.25.
//

#ifndef MAGIC_CUBE2_CUBE_H
#define MAGIC_CUBE2_CUBE_H
#include <array>

#include "colored_cubelet.h"
#include "layer.h"


class Cube
{
    std::array<ColoredCubelet, 26> cubelets;

public:
    Cube();

    void coloring();

    Cube& rotateXClockwise(const Layer& layer, const Angle& angle);
    Cube& rotateYClockwise(const Layer& layer, const Angle& angle);
    Cube& rotateZClockwise(const Layer& layer, const Angle& angle);
};


#endif //MAGIC_CUBE2_CUBE_H
