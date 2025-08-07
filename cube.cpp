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
            cubelet.coloring(FRONT_ORIENTED, Color::RED);
        }
        if (BACK_LAYER.contains(cubelet))
        {
            cubelet.coloring(BACK_ORIENTED, Color::ORANGE);
        }
        if (RIGHT_LAYER.contains(cubelet))
        {
            cubelet.coloring(RIGHT_ORIENTED, Color::GREEN);
        }
        if (LEFT_LAYER.contains(cubelet))
        {
            cubelet.coloring(LEFT_ORIENTED, Color::BLUE);
        }
        if (TOP_LAYER.contains(cubelet))
        {
            cubelet.coloring(TOP_ORIENTED, Color::WHITE);
        }
        if (BOTTOM_LAYER.contains(cubelet))
        {
            cubelet.coloring(BOTTOM_ORIENTED, Color::YELLOW);
        }
    }
}

Surface Cube::getFront() const
{
    std::array<std::array<Color, 3>, 3> surface{};
    for (const auto& cubelet : cubelets)
    {
        if (FRONT_LAYER.contains(cubelet))
        {
            surface[cubelet.position.y + 1][cubelet.position.z + 1] = cubelet.getFaceOn(FRONT_ORIENTED);
        }
    }
    return Surface(surface);
}

Surface Cube::getBack() const
{
    std::array<std::array<Color, 3>, 3> surface{};
    for (const auto& cubelet : cubelets)
    {
        if (BACK_LAYER.contains(cubelet))
        {
            surface[cubelet.position.y + 1][cubelet.position.z + 1] = cubelet.getFaceOn(BACK_ORIENTED);
        }
    }
    return Surface(surface);
}

Surface Cube::getRight() const
{
    std::array<std::array<Color, 3>, 3> surface{};
    for (const auto& cubelet : cubelets)
    {
        if (RIGHT_LAYER.contains(cubelet))
        {
            surface[cubelet.position.x + 1][cubelet.position.z + 1] = cubelet.getFaceOn(RIGHT_ORIENTED);
        }
    }
    return Surface(surface);
}

Surface Cube::getLeft() const
{
    std::array<std::array<Color, 3>, 3> surface{};
    for (const auto& cubelet : cubelets)
    {
        if (LEFT_LAYER.contains(cubelet))
        {
            surface[cubelet.position.x + 1][cubelet.position.z + 1] = cubelet.getFaceOn(LEFT_ORIENTED);
        }
    }
    return Surface(surface);
}

Surface Cube::getTop() const
{
    std::array<std::array<Color, 3>, 3> surface{};
    for (const auto& cubelet : cubelets)
    {
        if (TOP_LAYER.contains(cubelet))
        {
            surface[cubelet.position.x + 1][cubelet.position.y + 1] = cubelet.getFaceOn(TOP_ORIENTED);
        }
    }
    return Surface(surface);
}

Surface Cube::getBottom() const
{
    std::array<std::array<Color, 3>, 3> surface{};
    for (const auto& cubelet : cubelets)
    {
        if (BOTTOM_LAYER.contains(cubelet))
        {
            surface[cubelet.position.x + 1][cubelet.position.y + 1] = cubelet.getFaceOn(BOTTOM_ORIENTED);
        }
    }
    return Surface(surface);
}

void Cube::rotateLayer(const Layer& layer, const Angle angle)
{
    // rotate layer around positive X-axis clockwise
    for (auto& cubelet : cubelets)
    {
        if (layer.contains(cubelet))
        {
            if (layer.get_axisVec() == X_Axis_POSITIVE)
            {
                cubelet.rotateXClockwise(angle);
            }
            if (layer.get_axisVec() == Y_Axis_POSITIVE)
            {
                cubelet.rotateYClockwise(angle);
            }
            if (layer.get_axisVec() == Z_Axis_POSITIVE)
            {
                cubelet.rotateZClockwise(angle);
            }
        }
    }
}
