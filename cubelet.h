//
// Created by Hanyu Shi on 06.08.25.
//

#ifndef MAGIC_CUBE2_CUBELET_H
#define MAGIC_CUBE2_CUBELET_H
#include "position.h"

class Cubelet
{
    Position position;

public:
    virtual ~Cubelet() = default;
    Cubelet(int x, int y, int z);

    virtual void rotateXClockwise(Angle angle);
    virtual void rotateYClockwise(Angle angle);
    virtual void rotateZClockwise(Angle angle);
};


#endif //MAGIC_CUBE2_CUBELET_H
