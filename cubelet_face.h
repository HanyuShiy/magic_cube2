#include "angle.h"

#include "orientation.h"
#include "color.h"

class CubeletFace
{
    Orientation orientation;

    Color color;

public:
    explicit CubeletFace(Orientation orientation);

    void rotateX(Angle angle);
    void rotateY(Angle angle);
    void rotateZ(Angle angle);

    void coloring(Color color);

};

const CubeletFace FRONT_ORIENTED({1, 0, 0});
const CubeletFace BACK_ORIENTED({-1, 0, 0});
const CubeletFace LEFT_ORIENTED({0, -1, 0});
const CubeletFace RIGHT_ORIENTED({0, 1, 0});
const CubeletFace TOP_ORIENTED({0, 0, 1});
const CubeletFace BOTTOM_ORIENTED({0, 0, -1});
