#include "cubelet_face.h"

CubeletFace::CubeletFace(const Orientation orientation)
    : orientation(orientation),color(EMPTY)
{
}

void CubeletFace::rotateX(const Angle angle)
{
    orientation.rotateX(angle);
}

void CubeletFace::rotateY(const Angle angle)
{
    orientation.rotateY(angle);
}

void CubeletFace::rotateZ(const Angle angle)
{
    orientation.rotateZ(angle);
}

void CubeletFace::coloring(const Orientation orientation, Color color)
{
    if (this->orientation == orientation)
        this->color = color;
}

Color CubeletFace::getColor() const
{
    return this->color;
}

Orientation CubeletFace::getOrientation() const
{
    return this->orientation;
}
