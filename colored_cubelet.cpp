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
