//
// Created by Hanyu Shi on 06.08.25.
//

#include "cubelet_face.h"

CubeletFace::CubeletFace(const Orientation orientation) : orientation(orientation), color(Color::EMPTY)
{
}

Orientation CubeletFace::get_orientation() const
{
    return orientation;
}

Color CubeletFace::get_color() const
{
    return color;
}

void CubeletFace::rotateXClockwise(const Angle angle)
{
    orientation.rotateXClockwise(angle);
}

void CubeletFace::rotateYClockwise(const Angle angle)
{
    orientation.rotateYClockwise(angle);
}

void CubeletFace::rotateZClockwise(const Angle angle)
{
    orientation.rotateZClockwise(angle);
}

void CubeletFace::coloring(const Color color)
{
    this->color = color;
}

