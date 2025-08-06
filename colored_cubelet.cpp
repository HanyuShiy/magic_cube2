//
// Created by Hanyu Shi on 06.08.25.
//

#include "colored_cubelet.h"

ColoredCubelet::ColoredCubelet(int x, int y, int z) :
    Cubelet(position(x, y, z)),
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
