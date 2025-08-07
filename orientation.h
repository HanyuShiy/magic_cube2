//
// Created by Hanyu Shi on 06.08.25.
//

#ifndef MAGIC_CUBE2_ORIENTATION_H
#define MAGIC_CUBE2_ORIENTATION_H
#include "angle.h"


class Orientation
{
    int x, y, z;

public:
    Orientation(int x, int y, int z);

    bool operator==(const Orientation&) const = default;

    void rotateXClockwise(Angle angle);
    void rotateYClockwise(Angle angle);
    void rotateZClockwise(Angle angle);
};

const auto FRONT_ORIENTED = Orientation(1,0,0);
const auto BACK_ORIENTED = Orientation(-1,0,0);
const auto RIGHT_ORIENTED = Orientation(0,1,0);
const auto LEFT_ORIENTED = Orientation(0,-1,0);
const auto TOP_ORIENTED = Orientation(0,0,1);
const auto BOTTOM_ORIENTED = Orientation(0,0,-1);

const auto X_Axis_POSITIVE = Orientation(1,0,0);
const auto Y_Axis_POSITIVE = Orientation(0,1,0);
const auto Z_Axis_POSITIVE = Orientation(0,0,1);

#endif //MAGIC_CUBE2_ORIENTATION_H
