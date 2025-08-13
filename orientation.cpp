//
// Created by Hanyu Shi on 13.08.25.
//

#include "orientation.h"

Orientation::Orientation(const int x, const int y, const int z) : x(x), y(y), z(z)
{
}

Orientation& Orientation::rotateX(const Angle angle)
{
    const int newY = y * Angle::cos(angle) + z * Angle::sin(angle);
    const int newZ = -y * Angle::sin(angle) + z * Angle::cos(angle);
    y = newY;
    z = newZ;
    return *this;
}

Orientation& Orientation::rotateY(const Angle angle)
{
    const int newX = x * Angle::cos(angle) - z * Angle::sin(angle);
    const int newZ = x * Angle::sin(angle) + z * Angle::cos(angle);
    y = newX;
    z = newZ;
    return *this;
}

Orientation& Orientation::rotateZ(const Angle angle)
{
    const int newY = y * Angle::cos(angle) - x * Angle::sin(angle);
    const int newX = y * Angle::sin(angle) + x * Angle::cos(angle);
    x = newX;
    y = newY;
    return *this;
}
