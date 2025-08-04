#include "angle.h"

#include "orientation.h"
#include "color.h"

class CubeletFace
{
    Orientation orientation;

    Color color;

public:
    CubeletFace(Orientation orientation);

    void rotateX(Angle angle);
    void rotateY(Angle angle);
    void rotateZ(Angle angle);

    void coloring(Orientation orientation, Color color);

    Color getColor() const;
    Orientation getOrientation() const;
};
