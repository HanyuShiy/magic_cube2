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

Face Cube::getLeftFace()
{
    std::array<std::array<Color, 3>, 3> left_face;
    for (auto& cubelet : cubelets)
    {
        if (cubelet.onLeftFace())
        {
            left_face[cubelet.position.x + 1][cubelet.position.z + 1] = cubelet.getFaceOn(LEFT_ORIENTED);
        }
    }
    return Face(left_face);
}

Face Cube::getRightFace()
{
    std::array<std::array<Color, 3>, 3> right_face;
    for (auto& cubelet : cubelets)
    {
        if (cubelet.onRightFace())
        {
            right_face[cubelet.position.x + 1][cubelet.position.z + 1] = cubelet.getFaceOn(RIGHT_ORIENTED);
        }
    }
    return Face(right_face);
}

Face Cube::getBackFace()
{
    std::array<std::array<Color, 3>, 3> back_face;
    for (auto& cubelet : cubelets)
    {
        if (cubelet.onBackFace())
        {
            back_face[cubelet.position.y + 1][cubelet.position.z + 1] = cubelet.getFaceOn(BACK_ORIENTED);
        }
    }
    return Face(back_face);
}

Face Cube::getBottomFace()
{
    std::array<std::array<Color, 3>, 3> bottom_face;
    for (auto& cubelet : cubelets)
    {
        if (cubelet.onBottomFace())
        {
            bottom_face[cubelet.position.x + 1][cubelet.position.y + 1] = cubelet.getFaceOn(BOTTOM_ORIENTED);
        }
    }
    return Face(bottom_face);
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
