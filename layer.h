//
// Created by Hanyu Shi on 07.08.25.
//

#ifndef MAGIC_CUBE2_LAYER_H
#define MAGIC_CUBE2_LAYER_H
#include <functional>
#include "cubelet.h"
#include "orientation.h"


class Layer
{
public:
    std::function<bool(Cubelet& cubelet)> contains;

    Layer(const std::function<bool(Cubelet& cubelet)>& contains, Orientation axisVec);

private:
    const Orientation axisVec; // positive direction of coordinate axis
};

const Layer xP1([](const Cubelet& cubelet) { return cubelet.position.x == 1; }, {1, 0, 0});
const Layer yP1([](const Cubelet& cubelet) { return cubelet.position.y == 1; }, {0, 1, 0});
const Layer zP1([](const Cubelet& cubelet) { return cubelet.position.z == 1; }, {0, 0, 1});
const Layer xN1([](const Cubelet& cubelet) { return cubelet.position.x == -1; }, {1, 0, 0});
const Layer yN1([](const Cubelet& cubelet) { return cubelet.position.y == -1; }, {0, 1, 0});
const Layer zN1([](const Cubelet& cubelet) { return cubelet.position.z == -1; }, {0, 0, 1});
const Layer x0Layer([](const Cubelet& cubelet) { return cubelet.position.x == 0; }, {1, 0, 0});
const Layer y0Layer([](const Cubelet& cubelet) { return cubelet.position.y == 0; }, {0, 1, 0});
const Layer z0Layer([](const Cubelet& cubelet) { return cubelet.position.z == 0; }, {0, 0, 1});

inline const Layer& FRONT_LAYER = xP1;
inline const Layer& BACK_LAYER = xN1;
inline const Layer& RIGHT_LAYER = yP1;
inline const Layer& LEFT_LAYER = yN1;
inline const Layer& TOP_LAYER = zP1;
inline const Layer& BOTTOM_LAYER = zN1;

#endif //MAGIC_CUBE2_LAYER_H
