//
// Created by Hanyu Shi on 13.08.25.
//

#include "cube.h"

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
}

void Cube::coloring()
{
    for (auto& cubelet : cubelets)
    {
        // cubelet.coloring();
    }
}
