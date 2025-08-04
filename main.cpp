#include "cube.h"

int main()
{
    auto cube = Cube();
    cube.rotateFrontClockwise();
    cube.getTopFace().print();
}
