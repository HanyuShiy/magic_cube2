//
// Created by Hanyu Shi on 13.08.25.
//

#ifndef MAGIC_CUBE2_POSITION_H
#define MAGIC_CUBE2_POSITION_H
#include "angle.h"

class Position
{
public:
    int x, y, z;

    Position(int x, int y, int z);

    Position& rotateX(Angle angle);
    Position& rotateY(Angle angle);
    Position& rotateZ(Angle angle);
};


#endif //MAGIC_CUBE2_POSITION_H
