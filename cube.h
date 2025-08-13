//
// Created by Hanyu Shi on 13.08.25.
//

#ifndef MAGIC_CUBE2_CUBE_H
#define MAGIC_CUBE2_CUBE_H
#include <array>

#include "colored_cubelet.h"


class Cube
{
    std::array<ColoredCubelet, 26> cubelets;

public:
    Cube();

    void coloring();
};


#endif //MAGIC_CUBE2_CUBE_H
