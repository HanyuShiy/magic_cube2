#include "position.h"

class Cubelet
{
    Position position;

public:
    Cubelet(int x, int y, int z);

    // Alternative: make onxXxFace a boolean variable,
    // providing a general method to set the booleans true or false (??)
    bool onFrontFace() const;
    bool onBackFace() const;
    bool onLeftFace() const;
    bool onRightFace() const;
    bool onTopFace() const;
    bool onBottomFace() const;

    void rotateXClockwise(Angle angle);
    void rotateYClockwise(Angle angle);
    void rotateZClockwise(Angle angle);
};
