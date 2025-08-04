#include "cube.h"

int main()
{
    auto cube = Cube();
    cube.rotateTopClockwise();
    cube.getFrontFace().print();
    cube.getBackFace().print();
    cube.getTopFace().print();
    cube.getBackFace().print();
    cube.getLeftFace().print();
    cube.getRightFace().print();
}
