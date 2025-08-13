//
// Created by Hanyu Shi on 13.08.25.
//

#include "cubelet_face.h"

CubeletFace::CubeletFace(const Orientation orientation) : orientation(orientation)
{
}

void CubeletFace::rotateX(const Angle angle)
{
    orientation.rotateX(angle);
}
