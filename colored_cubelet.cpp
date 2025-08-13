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


