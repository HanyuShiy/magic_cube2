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

void ColoredCubelet::coloring(const Color color)
{
    for (auto& face : cubelet_faces)
    {
        face.coloring(color);
    }

}
