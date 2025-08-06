//
// Created by Hanyu Shi on 06.08.25.
//

#ifndef MAGIC_CUBE2_POSITION_H
#define MAGIC_CUBE2_POSITION_H
#include "angle.h"


class Position
{
    int x, y, z;

public:
    Position(int x, int y, int z);

    void rotateXClockwise(Angle angle);
    void rotateYClockwise(Angle angle);
    void rotateZClockwise(Angle angle);

};


#endif //MAGIC_CUBE2_POSITION_H
