#include "cubelet.h"

Cubelet::Cubelet(const int x, const int y, const int z): position(x, y, z)
{
}

bool Cubelet::onFrontFace() const
{
    return this->position.x == 1;
}

bool Cubelet::onBackFace() const
{
    return this->position.x == -1;
}

bool Cubelet::onLeftFace() const
{
    return this->position.y == -1;
}

bool Cubelet::onRightFace() const
{
    return this->position.y == 1;
}

bool Cubelet::onTopFace() const
{
    return this->position.z == 1;
}

bool Cubelet::onBottomFace() const
{
    return this->position.z == -1;
}

void Cubelet::rotateXClockwise(Angle angle)
{
    position.rotateX(angle);
}

void Cubelet::rotateYClockwise(Angle angle)
{
    position.rotateY(angle);
}

void Cubelet::rotateZClockwise(Angle angle)
{
    position.rotateZ(angle);
}
