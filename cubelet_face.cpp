//
// Created by Hanyu Shi on 06.08.25.
//

#include "cubelet_face.h"

CubeletFace::CubeletFace(Orientation orientation) : orientation(orientation)
{
}

void CubeletFace::rotateXClockwise(Angle angle)
{
    orientation.rotateXClockwise(angle);
}

void CubeletFace::rotateYClockwise(Angle angle)
{
    orientation.rotateYClockwise(angle);
}

void CubeletFace::rotateZClockwise(Angle angle)
{
    orientation.rotateZClockwise(angle);
}

void CubeletFace::coloring(Color color)
{
    this->color = color;
}

