//
// Created by Hanyu Shi on 06.08.25.
//

#include "colored_cubelet.h"

ColoredCubelet::ColoredCubelet(const int x, const int y, const int z) :
    Cubelet(x, y, z),
    cubelet_faces({
        FRONT_ORIENTED,
        BACK_ORIENTED,
        RIGHT_ORIENTED,
        LEFT_ORIENTED,
        TOP_ORIENTED,
        BOTTOM_ORIENTED
    })
{
}

void ColoredCubelet::coloring(const Orientation orientation, const Color color)
{
    for (auto& face : cubelet_faces)
    {
        if (face.get_orientation() == orientation)
        {
            face.coloring(color);
        }
    }
}

Color ColoredCubelet::getFaceOn(const Orientation orientation) const
{
    for (auto& cf : cubelet_faces)
    {
        if (cf.get_orientation() == orientation)
        {
            return cf.get_color();
        }
    }
    throw;
}

void ColoredCubelet::rotateXClockwise(const Angle angle)
{
    Cubelet::rotateXClockwise(angle);
    for (auto& face : cubelet_faces)
    {
        face.rotateXClockwise(angle);
    }
}

void ColoredCubelet::rotateYClockwise(const Angle angle)
{
    Cubelet::rotateYClockwise(angle);
    for (auto& face : cubelet_faces)
    {
        face.rotateYClockwise(angle);
    }
}

void ColoredCubelet::rotateZClockwise(const Angle angle)
{
    Cubelet::rotateZClockwise(angle);
    for (auto& face : cubelet_faces)
    {
        face.rotateZClockwise(angle);
    }
}
