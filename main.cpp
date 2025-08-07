#include <iostream>

#include "cube.h"

int main()
{
    const auto cube = Cube();

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
