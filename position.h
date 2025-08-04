#include "angle.h"

class Position
{
public:
    int x, y, z;

    Position(int x, int y, int z);

    void rotateX(Angle angle);
    void rotateY(Angle angle);
    void rotateZ(Angle angle);
};
