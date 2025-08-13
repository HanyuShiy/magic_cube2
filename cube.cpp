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

// Cube& Cube::rotateXClockwise(const Layer& layer, const Angle& angle)
// {
//     for (auto& cubelet : cubelets)
//     {
//         if (layer.contains(cubelet))
//         {
//             cubelet.rotateX(angle);
//         }
//     }
//     return *this;
// }
//
// Cube& Cube::rotateYClockwise(const Layer& layer, const Angle& angle)
// {
//     for (auto& cubelet : cubelets)
//     {
//         if (layer.contains(cubelet))
//         {
//             cubelet.rotateY(angle);
//         }
//     }
//     return *this;
// }
//
// Cube& Cube::rotateZClockwise(const Layer& layer, const Angle& angle)
// {
//     for (auto& cubelet : cubelets)
//     {
//         if (layer.contains(cubelet))
//         {
//             cubelet.rotateZ(angle);
//         }
//     }
//     return *this;
// }

Cube& Cube::rotateClockwiseAngle(const Layer& layer, const Angle& angle)
{
    for (auto& cubelet : cubelets)
    {
        if (layer.contains(cubelet))
        {
            cubelet.rotateAround(layer.get_axis(), angle);
        }
    }
    return *this;
}

Face Cube::getFrontFace() const
{
    std::array<std::array<Color, 3>, 3> front_face;
    for (const auto& cubelet : cubelets)
    {
        if (frontLayer.contains(cubelet))
        {
            front_face[cubelet.position.y + 1][cubelet.position.z + 1] = cubelet.getColorOn(FRONT_ORIENTED);
        }
    }
    return {front_face};
}

Face Cube::getBackFace() const
{
    std::array<std::array<Color, 3>, 3> backFace{};
    for (const auto& cubelet : cubelets)
    {
        if (backLayer.contains(cubelet))
        {
            backFace[cubelet.position.y + 1][cubelet.position.z + 1] = cubelet.getColorOn(BACK_ORIENTED);
        }
    }
    return {backFace};
}

Face Cube::getLeftFace() const
{
    std::array<std::array<Color, 3>, 3> leftFace{};
    for (const auto& cubelet : cubelets)
    {
        if (leftLayer.contains(cubelet))
        {
            leftFace[cubelet.position.z + 1][cubelet.position.x + 1] = cubelet.getColorOn(LEFT_ORIENTED);
        }
    }
    return {leftFace};
}

Face Cube::getRightFace() const
{
    std::array<std::array<Color, 3>, 3> rightFace{};
    for (const auto& cubelet : cubelets)
    {
        if (rightLayer.contains(cubelet))
        {
            rightFace[cubelet.position.x + 1][cubelet.position.z + 1] = cubelet.getColorOn(RIGHT_ORIENTED);
        }
    }
    return {rightFace};
}

Face Cube::getTopFace() const
{
    std::array<std::array<Color, 3>, 3> topFace{};
    for (const auto& cubelet : cubelets)
    {
        if (topLayer.contains(cubelet))
        {
            topFace[cubelet.position.x + 1][cubelet.position.y + 1] = cubelet.getColorOn(TOP_ORIENTED);
        }
    }
    return {topFace};
}

Face Cube::getBottomFace() const
{
    std::array<std::array<Color, 3>, 3> bottomFace{};
    for (const auto& cubelet : cubelets)
    {
        if (bottomLayer.contains(cubelet))
        {
            bottomFace[cubelet.position.x + 1][cubelet.position.y + 1] = cubelet.getColorOn(BOTTOM_ORIENTED);
        }
    }
    return {bottomFace};
}

// Face Cube::getFace(const Layer& layer) const
// {
//     std::array<std::array<Color, 3>, 3> colors;
//     for (const auto& cubelet : cubelets)
//     {
//         if (layer.contains(cubelet))
//         {
//
//         }
//     }
// }
