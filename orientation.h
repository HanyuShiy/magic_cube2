//
// Created by Hanyu Shi on 13.08.25.
//

#ifndef MAGIC_CUBE2_ORIENTATION_H
#define MAGIC_CUBE2_ORIENTATION_H
#include "angle.h"


class Orientation
{
    int x, y, z;

public:
    Orientation(int x, int y, int z);

    Orientation& rotateX(Angle angle);
    Orientation& rotateY(Angle angle);
    Orientation& rotateZ(Angle angle);
    bool operator==(const Orientation& orientation) const = default;
};

const auto FRONT_ORIENTED = Orientation(1, 0, 0);
const auto BACK_ORIENTED = Orientation(-1, 0, 0);
const auto RIGHT_ORIENTED = Orientation(0, 1, 0);
const auto LEFT_ORIENTED = Orientation(0, -1, 0);
const auto TOP_ORIENTED = Orientation(0, 0, 1);
const auto BOTTOM_ORIENTED = Orientation(0, 0, -1);


#endif //MAGIC_CUBE2_ORIENTATION_H
