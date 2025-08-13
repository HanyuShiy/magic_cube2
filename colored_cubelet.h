//
// Created by Hanyu Shi on 13.08.25.
//

#ifndef MAGIC_CUBE2_COLORED_CUBELET_H
#define MAGIC_CUBE2_COLORED_CUBELET_H
#include <array>
#include <array>

#include "cubelet.h"
#include "cubelet_face.h"


class ColoredCubelet : public Cubelet
{
    std::array<CubeletFace, 6> faces;

public:
    explicit ColoredCubelet(Position position);

    Color getColorOn(const Orientation& orientation) const;

    void rotateX(const Angle& angle) override;
    void rotateY(const Angle& angle) override;
    void rotateZ(const Angle& angle) override;

    void rotateAround(const Orientation& axis, const Angle& angle);

    void coloring(const Orientation& orientation, const Color& color);
};


#endif //MAGIC_CUBE2_COLORED_CUBELET_H
