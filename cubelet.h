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
    Cubelet(int x, int y, int z);

    void rotateXClockwise(Angle angle);
    void rotateYClockwise(Angle angle);
    void rotateZClockwise(Angle angle);
};


#endif //MAGIC_CUBE2_CUBELET_H
