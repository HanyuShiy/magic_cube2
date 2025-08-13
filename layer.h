//
// Created by Hanyu Shi on 07.08.25.
//

#ifndef MAGIC_CUBE2_LAYER_H
#define MAGIC_CUBE2_LAYER_H
#include <functional>

#include "colored_cubelet.h"
#include "orientation.h"


class Layer
{
public:
    std::function<bool(const ColoredCubelet& cubelet)> contains;

    Layer(const std::function<bool(const ColoredCubelet& cubelet)>& contains, Orientation axisVec);

    [[nodiscard]] Orientation get_axisVec() const;

private:
    const Orientation axisVec; // positive direction of coordinate axis
};

const Layer FRONT_LAYER([](const ColoredCubelet& cubelet) { return cubelet.position.x == 1; }, {1, 0, 0});
const Layer RIGHT_LAYER([](const ColoredCubelet& cubelet) { return cubelet.position.y == 1; }, {0, 1, 0});
const Layer TOP_LAYER([](const ColoredCubelet& cubelet) { return cubelet.position.z == 1; }, {0, 0, 1});
const Layer BACK_LAYER([](const ColoredCubelet& cubelet) { return cubelet.position.x == -1; }, {1, 0, 0});
const Layer LEFT_LAYER([](const ColoredCubelet& cubelet) { return cubelet.position.y == -1; }, {0, 1, 0});
const Layer BOTTOM_LAYER([](const ColoredCubelet& cubelet) { return cubelet.position.z == -1; }, {0, 0, 1});
const Layer x0Layer([](const ColoredCubelet& cubelet) { return cubelet.position.x == 0; }, {1, 0, 0});
const Layer y0Layer([](const ColoredCubelet& cubelet) { return cubelet.position.y == 0; }, {0, 1, 0});
const Layer z0Layer([](const ColoredCubelet& cubelet) { return cubelet.position.z == 0; }, {0, 0, 1});


#endif //MAGIC_CUBE2_LAYER_H
