//
// Created by Hanyu Shi on 13.08.25.
//

#include "cube.h"

#include "layer.h"

Cube::Cube() : cubelets({
    ColoredCubelet({1, 1, 1}),
    ColoredCubelet({1, 1, 0}),
    ColoredCubelet({1, 1, -1}),
    ColoredCubelet({1, 0, 1}),
    ColoredCubelet({1, 0, 0}),
    ColoredCubelet({1, 0, -1}),
    ColoredCubelet({1, -1, 1}),
    ColoredCubelet({1, -1, 0}),
    ColoredCubelet({1, -1, -1}),

    ColoredCubelet({0, 1, 1}),
    ColoredCubelet({0, 1, 0}),
    ColoredCubelet({0, 1, -1}),
    ColoredCubelet({0, 0, 1}),
    // There is no ColoredCubelet({0, 0, 0})
    ColoredCubelet({0, 0, -1}),
    ColoredCubelet({0, -1, 1}),
    ColoredCubelet({0, -1, 0}),
    ColoredCubelet({0, -1, -1}),

    ColoredCubelet({-1, 1, 1}),
    ColoredCubelet({-1, 1, 0}),
    ColoredCubelet({-1, 1, -1}),
    ColoredCubelet({-1, 0, 1}),
    ColoredCubelet({-1, 0, 0}),
    ColoredCubelet({-1, 0, -1}),
    ColoredCubelet({-1, -1, 1}),
    ColoredCubelet({-1, -1, 0}),
    ColoredCubelet({-1, -1, -1})
})
{
    coloring();
}

void Cube::coloring()
{
    for (auto& cubelet : cubelets)
    {
        if (frontLayer.contains(cubelet))
        {
            cubelet.coloring(FRONT_ORIENTED, RED);
        }
        if (backLayer.contains(cubelet))
        {
            cubelet.coloring(BACK_ORIENTED, ORANGE);
        }
        if (rightLayer.contains(cubelet))
        {
            cubelet.coloring(RIGHT_ORIENTED, BLUE);
        }
        if (leftLayer.contains(cubelet))
        {
            cubelet.coloring(LEFT_ORIENTED, GREEN);
        }
        if (topLayer.contains(cubelet))
        {
            cubelet.coloring(TOP_ORIENTED, WHITE);
        }
        if (bottomLayer.contains(cubelet))
        {
            cubelet.coloring(BOTTOM_ORIENTED, YELLOW);
        }
    }
}
