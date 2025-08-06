//
// Created by Hanyu Shi on 07.08.25.
//

#include "cube.h"

#include "layer.h"

Cube::Cube() : cubelets({
    ColoredCubelet{1, 1, 1}, {1, 1, 0}, {1, 1, -1},
    {0, 1, 1}, {0, 1, 0}, {0, 1, -1},
    {-1, 1, 1}, {-1, 1, 0}, {-1, 1, -1},
    {1, 0, 1}, {1, 0, 0}, {1, 0, -1},
    {0, 0, 1}, {0, 0, -1},
    {-1, 0, 1}, {-1, 0, 0}, {-1, 0, -1},
    {1, -1, 1}, {1, -1, 0}, {1, -1, -1},
    {0, -1, 1}, {0, -1, 0}, {0, -1, -1},
    {-1, -1, 1}, {-1, -1, 0}, {-1, -1, -1}
})
{
    coloring();
}

void Cube::coloring()
{
    for (auto& cubelet : cubelets)
    {
        if (FRONT_LAYER.contains(cubelet))
        {
            cubelet.coloring(Color::RED);
        }
        if (BACK_LAYER.contains(cubelet))
        {
            cubelet.coloring(Color::ORANGE);
        }
        if (RIGHT_LAYER.contains(cubelet))
        {
            cubelet.coloring(Color::GREEN);
        }
        if (LEFT_LAYER.contains(cubelet))
        {
            cubelet.coloring(Color::BLUE);
        }
        if (TOP_LAYER.contains(cubelet))
        {
            cubelet.coloring(Color::WHITE);
        }
        if (BOTTOM_LAYER.contains(cubelet))
        {
            cubelet.coloring(Color::YELLOW);
        }


    }

}
