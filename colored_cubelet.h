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
public:
    std::array<CubeletFace, 6> cubelet_faces;

    ColoredCubelet(int x, int y, int z);

    void coloring(Color color);
};


#endif //MAGIC_CUBE2_COLORED_CUBELET_H
