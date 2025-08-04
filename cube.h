#include "colored_cubelet.h"
#include "face.h"

class Cube
{
    ColoredCubelet cubelets[26];

public:
    Cube();

    Face getFrontFace();
    Face getTopFace();

    void coloring();


};
