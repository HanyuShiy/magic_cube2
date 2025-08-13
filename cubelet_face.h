//
// Created by Hanyu Shi on 13.08.25.
//

#ifndef MAGIC_CUBE2_CUBELET_FACE_H
#define MAGIC_CUBE2_CUBELET_FACE_H
#include "orientation.h"


class CubeletFace
{
    Orientation orientation;
    Color color;
public:
    explicit CubeletFace(Orientation orientation);

    void rotateX(Angle angle);
};


#endif //MAGIC_CUBE2_CUBELET_FACE_H
