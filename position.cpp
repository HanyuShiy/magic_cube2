#include "position.h"

Position::Position(const int x, const int y, const int z)
    : x(x),
      y(y),
      z(z)
{
}

void Position::rotateX(const Angle angle)
{
    const int newY = y * Angle::cos(angle) + z * Angle::sin(angle);
    const int newZ = -y * Angle::sin(angle) + z * Angle::cos(angle);
    this->y = newY;
    this->z = newZ;
}

void Position::rotateY(const Angle angle)
{
    const int newX = x * Angle::cos(angle) - z * Angle::sin(angle);
    const int newZ = x * Angle::sin(angle) + z * Angle::cos(angle);
    this->x = newX;
    this->z = newZ;
}

void Position::rotateZ(const Angle angle)
{
    const int newY = -x * Angle::sin(angle) + y * Angle::cos(angle);
    const int newX = -y * Angle::sin(angle) + x * Angle::cos(angle);
    this->y = newY;
    this->x = newX;
}
