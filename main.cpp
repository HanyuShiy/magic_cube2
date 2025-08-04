#include "cube.h"

int main()
{
    auto cube = Cube();
    cube.rotateBottomClockwise();
    cube.getFrontFace().print();
}
