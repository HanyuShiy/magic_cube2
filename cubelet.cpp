//
// Created by Hanyu Shi on 13.08.25.
//

#include "cubelet.h"

Cubelet::Cubelet(const Position position) : position(position)
{
}

void Cubelet::rotateX(const Angle& angle)
{
    this->position.rotateX(angle);
}

void Cubelet::rotateY(const Angle& angle)
{
    this->position.rotateY(angle);
}

void Cubelet::rotateZ(const Angle& angle)
{
    this->position.rotateZ(angle);
}
