#include "angle.h"

class Orientation
{
    int x, y, z;

public:
    Orientation(int x, int y, int z);

    void rotateX(Angle angle);
    void rotateY(Angle angle);
    void rotateZ(Angle angle);

    bool operator==(const Orientation& orientation) const = default;
};

const auto FRONT_ORIENTED = Orientation{1, 0, 0};
const auto BACK_ORIENTED = Orientation{-1, 0, 0};
const auto LEFT_ORIENTED = Orientation{0, -1, 0};
const auto RIGHT_ORIENTED = Orientation{0, 1, 0};
const auto TOP_ORIENTED = Orientation{0, 0, 1};
const auto BOTTOM_ORIENTED = Orientation{0, 0, -1};

