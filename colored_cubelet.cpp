//
// Created by Hanyu Shi on 13.08.25.
//

#include "colored_cubelet.h"

#include "cubelet_face.h"
#include "orientation.h"

ColoredCubelet::ColoredCubelet(Position position) :
    Cubelet(position),
    faces(std::array<CubeletFace, 6>{
            FRONT_ORIENTED, BACK_ORIENTED,
            RIGHT_ORIENTED, LEFT_ORIENTED,
            TOP_ORIENTED, BOTTOM_ORIENTED

        }
    )
{
}

void ColoredCubelet::rotateX(const Angle& angle)
{
    Cubelet::rotateX(angle);
    for (auto& face : faces)
    {
        face.rotateX(angle);
    }
}

void ColoredCubelet::rotateY(const Angle& angle)
{
    Cubelet::rotateY(angle);
    for (auto& face : faces)
    {
        face.rotateY(angle);
    }
}

void ColoredCubelet::rotateZ(const Angle& angle)
{
    Cubelet::rotateZ(angle);
    for (auto& face : faces)
    {
        face.rotateZ(angle);
    }
}

void ColoredCubelet::coloring(const Orientation& orientation, const Color& color)
{
    for (auto& face : faces)
    {
        if (face.orientation == orientation)
        {
            face.coloring(color);
        }
    }
}
