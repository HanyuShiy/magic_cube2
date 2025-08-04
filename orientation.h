#include "angle.h"

class Orientation
{
    int x, y, z;

public:
    Orientation(int x, int y, int z);

    void rotateX(Angle angle);
    void rotateY(Angle angle);
    void rotateZ(Angle angle);
};
