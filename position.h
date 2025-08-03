#include "angle.h"

class Position
{
    int x, y, z;

public:
    Position(int x, int y, int z);

    void rotateX(Angle angle);
    void rotateY(Angle angle);
    void rotateZ(Angle angle);
};
