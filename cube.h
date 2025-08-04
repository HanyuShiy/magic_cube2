#include "colored_cubelet.h"
#include "face.h"

class Cube
{
    ColoredCubelet cubelets[26];

public:
    Cube();

    Face getFrontFace();
    Face getLeftFace();
    Face getRightFace();
    Face getBackFace();
    Face getBottomFace();
    Face getTopFace();

    void coloring();

    void rotateFrontClockwise();
    void rotateBackClockwise();
    void rotateTopClockwise();
    void rotateBottomClockwise();
    void rotateLeftClockwise();
    void rotateRightClockwise();
};
