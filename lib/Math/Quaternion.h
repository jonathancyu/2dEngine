//
// Created by yucjo on 6/9/2021.
//

#ifndef ENGINE_QUATERNION_H
#define ENGINE_QUATERNION_H
#include "Math/Matrix.h"

class Quaternion {
public:
    float r, i, j, k;
    Quaternion(float newR, float newI, float newJ, float newK);
    Quaternion(Matrix rotation);
    Quaternion();
    Matrix toMatrix();
};


#endif //ENGINE_QUATERNION_H
