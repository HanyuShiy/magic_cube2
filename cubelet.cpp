//
// Created by Hanyu Shi on 06.08.25.
//

#include "cubelet.h"

Cubelet::Cubelet(const int x, const int y, const int z) : position(x, y, z)
{
}

void Cubelet::rotateXClockwise(const Angle angle)
{
    position.rotateXClockwise(angle);
}

void Cubelet::rotateYClockwise(const Angle angle)

{
    position.rotateYClockwise(angle);
}

void Cubelet::rotateZClockwise(const Angle angle)
{
    position.rotateZClockwise(angle);
}
