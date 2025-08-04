#include "cube.h"
#include <array>

Cube::Cube() : cubelets{
    {1, 1, 0}, {1, 1, 1}, {1, 1, -1},
    {1, 0, 0}, {1, 0, 1}, {1, 0, -1},
    {1, -1, 0}, {1, -1, 1}, {1, -1, -1},
    {0, 1, 0}, {0, 1, 1}, {0, 1, -1},
    {0, 0, 1}, {0, 0, -1},
    {0, -1, 0}, {0, -1, 1}, {0, -1, -1},
    {-1, 1, 0}, {-1, 1, 1}, {-1, 1, -1},
    {-1, 0, 0}, {-1, 0, 1}, {-1, 0, -1},
    {-1, -1, 0}, {-1, -1, 1}, {-1, -1, -1}
}
{
    coloring();
}

Face Cube::getFrontFace()
{
    std::array<std::array<Color, 3>, 3> front_face;
    for (auto& cubelet : cubelets)
    {
        if (cubelet.onFrontFace())
        {
            front_face[cubelet.position.y + 1][cubelet.position.z + 1] = cubelet.getFaceOn(FRONT_ORIENTED);
        }
    }
    return Face(front_face);
}

Face Cube::getTopFace()
{
    std::array<std::array<Color, 3>, 3> top_face;
    for (const auto& cubelet : cubelets)
    {
        if (cubelet.onTopFace())
        {
            top_face[cubelet.position.x + 1][cubelet.position.y + 1] = cubelet.getFaceOn(TOP_ORIENTED);
        }
    }
    return Face(top_face);
}


void Cube::coloring()
{
    for (auto& cubelet : cubelets)
    {
        cubelet.coloring();
    }
}

void Cube::rotateFrontClockwise()
{
    for (auto& cubelet : cubelets)
    {
        if (cubelet.onFrontFace())
        {
            cubelet.rotateXClockwise(ONE_STEP_CLOCKWISE);
        }
    }
}

void Cube::rotateBackClockwise()
{
    for (auto& cubelet : cubelets)
    {
        if (cubelet.onBackFace())
        {
            cubelet.rotateXClockwise(ONE_STEP_CLOCKWISE);
        }
    }
}

void Cube::rotateTopClockwise()
{
    for (auto& cubelet : cubelets)
    {
        if (cubelet.onTopFace())
        {
            cubelet.rotateZClockwise(ONE_STEP_CLOCKWISE);
        }
    }
}

void Cube::rotateBottomClockwise()
{
    for (auto& cubelet : cubelets)
    {
        if (cubelet.onBottomFace())
        {
            cubelet.rotateZClockwise(ONE_STEP_CLOCKWISE);
        }
    }
}

void Cube::rotateLeftClockwise()
{
    for (auto& cubelet : cubelets)
    {
        if (cubelet.onLeftFace())
        {
            cubelet.rotateYClockwise(ONE_STEP_CLOCKWISE);
        }
    }
}

void Cube::rotateRightClockwise()
{
    for (auto& cubelet : cubelets)
    {
        if (cubelet.onLeftFace())
        {
            cubelet.rotateYClockwise(ONE_STEP_CLOCKWISE);
        }
    }
}
