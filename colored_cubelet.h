#include <cubelet.h>

#include "cubelet_face.h"

class
ColoredCubelet : public Cubelet
{
public:
    CubeletFace cubelet_faces[6];

    ColoredCubelet(int x, int y, int z);

    void coloring();

    void rotateXClockwise(Angle angle) override;
    void rotateYClockwise(Angle angle) override;
    void rotateZClockwise(Angle angle) override;
};
