//
// Created by Hanyu Shi on 06.08.25.
//

#ifndef MAGIC_CUBE2_CUBELET_FACE_H
#define MAGIC_CUBE2_CUBELET_FACE_H
#include "Color.h"
#include "orientation.h"


class CubeletFace
{
    Orientation orientation;
    Color color;

public:
    CubeletFace(Orientation orientation);

    void rotateXClockwise(Angle angle);
    void rotateYClockwise(Angle angle);
    void rotateZClockwise(Angle angle);
};



#endif //MAGIC_CUBE2_CUBELET_FACE_H
