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

    [[nodiscard]] Surface getFront() const;
    [[nodiscard]] Surface getBack() const;
    [[nodiscard]] Surface getRight() const;
    [[nodiscard]] Surface getLeft() const;
    [[nodiscard]] Surface getTop() const;
    [[nodiscard]] Surface getBottom() const;

    void rotateAroundX(const Layer& layer, Angle angle);
    void rotateAroundY(const Layer& layer, Angle angle);
    void rotateAroundZ(const Layer& layer, Angle angle);
};


#endif //MAGIC_CUBE2_CUBE_H
