#include <iostream>

#include "cube.h"

int main()
{
    auto cube = Cube();
    cube.rotateLeftClockwise();


    std::cout << "front face after rotation: " << "\n";
    cube.getFrontFace().print();
    std::cout << "back face after rotation: " << "\n";
    cube.getBackFace().print();
    std::cout << "top face after rotation: " << "\n";
    cube.getTopFace().print();
    std::cout << "back face after rotation: " << "\n";
    cube.getBackFace().print();
    std::cout << "left face after rotation: " << "\n";
    cube.getLeftFace().print();
    std::cout << "right face after rotation: " << "\n";
    cube.getRightFace().print();
}
