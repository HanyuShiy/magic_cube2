//
// Created by Hanyu Shi on 06.08.25.
//

#ifndef MAGIC_CUBE2_COLORED_CUBELET_H
#define MAGIC_CUBE2_COLORED_CUBELET_H
#include <array>

#include "cubelet.h"
#include "cubelet_face.h"

class ColoredCubelet final : public Cubelet
{
    std::array<CubeletFace, 6> cubelet_faces;

public:
    ColoredCubelet(int x, int y, int z);
};


#endif //MAGIC_CUBE2_COLORED_CUBELET_H
