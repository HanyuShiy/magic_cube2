#include "angle.h"

class Position
{
    int x, y, z;
    Position(int x, int y, int z);

public:

    void rotateX(Angle angle);
    void rotateY(Angle angle);
    void rotateZ(Angle angle);
};
