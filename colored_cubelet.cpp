#include "colored_cubelet.h"

ColoredCubelet::ColoredCubelet(int x, int y, int z)
    : Cubelet({x, y, z}),
      cubelet_faces
      {
          FRONT_ORIENTED, BACK_ORIENTED,
          LEFT_ORIENTED, RIGHT_ORIENTED,
          TOP_ORIENTED, BOTTOM_ORIENTED
      }
{
}

void ColoredCubelet::coloring()
{
    for (auto& face : cubelet_faces)
    {
        if (this->onFrontFace())
        {
            face.coloring(FRONT_ORIENTED, Color::RED);
        }
        if (this->onBackFace())
        {
            face.coloring(BACK_ORIENTED, Color::ORANGE);
        }
        if (this->onLeftFace())
        {
            face.coloring(LEFT_ORIENTED, Color::BLUE);
        }
        if (this->onRightFace())
        {
            face.coloring(RIGHT_ORIENTED, Color::GREEN);
        }
        if (this->onTopFace())
        {
            face.coloring(TOP_ORIENTED, Color::WHITE);
        }
        if (this->onBottomFace())
        {
            face.coloring(BOTTOM_ORIENTED,Color::YELLOW);
        }
    }
}

void ColoredCubelet::rotateXClockwise(const Angle angle)
{
    Cubelet::rotateXClockwise(angle);
    for (auto& face : cubelet_faces)
    {
        face.rotateX(angle);
    }
}

void ColoredCubelet::rotateYClockwise(const Angle angle)
{
    Cubelet::rotateYClockwise(angle);
    for (auto& face : cubelet_faces)
    {
        face.rotateX(angle);
    }
}

void ColoredCubelet::rotateZClockwise(const Angle angle)
{
    Cubelet::rotateZClockwise(angle);
    for (auto& face : cubelet_faces)
    {
        face.rotateX(angle);
    }
}

Color ColoredCubelet::getFaceOn(const Orientation orientation) const
{
    for (auto cf : cubelet_faces)
    {
        if (cf.getOrientation() == orientation)
        {
            return cf.getColor();
        }
    }
    throw;
}

