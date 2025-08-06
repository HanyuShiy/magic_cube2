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

    void rotateXClockwise(Angle angle);
    void rotateYClockwise(Angle angle);
    void rotateZClockwise(Angle angle);
};


#endif //MAGIC_CUBE2_ORIENTATION_H
