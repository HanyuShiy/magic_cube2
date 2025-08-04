#include "cubelet_face.h"

CubeletFace::CubeletFace(const Orientation orientation)
    : orientation(orientation), color(Color::EMPTY)
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
