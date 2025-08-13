//
// Created by Hanyu Shi on 13.08.25.
//

#ifndef MAGIC_CUBE2_CUBELET_FACE_H
#define MAGIC_CUBE2_CUBELET_FACE_H
#include "color.h"
#include "orientation.h"


class CubeletFace
{
public:
    Orientation orientation;
    Color color;

    CubeletFace(Orientation orientation);

    void rotateX(Angle angle);

    void coloring(const Color& color);
};


#endif //MAGIC_CUBE2_CUBELET_FACE_H
