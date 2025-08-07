//
// Created by Hanyu Shi on 06.08.25.
//

#include "position.h"

Position::Position(int x, int y, int z) : x(x), y(y), z(z)
{
}

void Position::rotateXClockwise(const Angle angle)
{
    // Rotates clockwise when viewed from the positive x-axis
    const int newY = y * Angle::cos(angle) + z * Angle::sin(angle);
    const int newZ = -y * Angle::sin(angle) + z * Angle::cos(angle);
    this->y = newY;
    this->z = newZ;
}

void Position::rotateYClockwise(const Angle angle)
{
    // Rotates clockwise when viewed from the positive y-axis
    const int newX = x * Angle::cos(angle) - z * Angle::sin(angle);
    const int newZ = x * Angle::sin(angle) + z * Angle::cos(angle);
    this->x = newX;
    this->z = newZ;
}

void Position::rotateZClockwise(const Angle angle)
{
    // Rotates clockwise when viewed from the positive z-axis
    const int newY = y * Angle::cos(angle) - x * Angle::sin(angle);
    const int newX = y * Angle::sin(angle) + x * Angle::cos(angle);
    this->x = newX;
    this->y = newY;
}
