//
// Created by Hanyu Shi on 13.08.25.
//

#ifndef MAGIC_CUBE2_LAYER_H
#define MAGIC_CUBE2_LAYER_H
#include "colored_cubelet.h"
#include "functional"

class Layer
{
public:
    std::function<bool(const ColoredCubelet& cubelet)> contains;

    explicit Layer(const std::function<bool(const ColoredCubelet& cubelet)>& contains, const Orientation& axis);

private:
    Orientation axis;
};

const auto frontLayer = Layer([](const ColoredCubelet& c)-> bool { return c.position.x == 1; }, {1, 0, 0});
const auto rightLayer = Layer([](const ColoredCubelet& c)-> bool { return c.position.y == 1; }, {0, 1, 0});
const auto topLayer = Layer([](const ColoredCubelet& c)-> bool { return c.position.z == 1; }, {0, 0, 1});
const auto x0Layer = Layer([](const ColoredCubelet& c)-> bool { return c.position.x == 0; }, {1, 0, 0});
const auto y0Layer = Layer([](const ColoredCubelet& c)-> bool { return c.position.y == 0; }, {0, 1, 0});
const auto z0Layer = Layer([](const ColoredCubelet& c)-> bool { return c.position.z == 0; }, {0, 0, 1});
const auto backLayer = Layer([](const ColoredCubelet& c)-> bool { return c.position.x == -1; }, {1, 0, 0});
const auto leftLayer = Layer([](const ColoredCubelet& c)-> bool { return c.position.y == -1; }, {0, 1, 0});
const auto bottomLayer = Layer([](const ColoredCubelet& c)-> bool { return c.position.z == -1; }, {0, 0, 1});

#endif //MAGIC_CUBE2_LAYER_H
