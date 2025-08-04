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

void ColoredCubelet::rotateXClockwise(Angle angle)
{
    Cubelet::rotateXClockwise(angle);
    for (auto& face : cubelet_faces)
    {
        face.rotateX(angle);
    }
}

void ColoredCubelet::rotateYClockwise(Angle angle)
{
    Cubelet::rotateYClockwise(angle);
    for (auto& face : cubelet_faces)
    {
        face.rotateX(angle);
    }
}

void ColoredCubelet::rotateZClockwise(Angle angle)
{
    Cubelet::rotateZClockwise(angle);
    for (auto& face : cubelet_faces)
    {
        face.rotateX(angle);
    }
}
