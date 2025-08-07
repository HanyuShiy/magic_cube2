#include <iostream>

#include "cube.h"

int main()
{
    auto cube = Cube();
    cube.rotateLayer(FRONT_LAYER, Clockwise_90);
    cube.rotateLayer(FRONT_LAYER, Counterclockwise_90);
    cube.rotateLayer(y0Layer, Clockwise_90);

    std::cout << "Top:\n";
    cube.getTop().print();
    std::cout << "Left:\n";
    cube.getLeft().print();
    std::cout << "Front:\n";
    cube.getFront().print();
    std::cout << "Right:\n";
    cube.getRight().print();
    std::cout << "Back:\n";
    cube.getBack().print();
    std::cout << "Bottom:\n";
    cube.getBottom().print();

    return 0;
}
