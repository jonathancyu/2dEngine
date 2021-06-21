//
// Created by yucjo on 6/9/2021.
//

#ifndef ENGINE_QUATERNION_H
#define ENGINE_QUATERNION_H
#include "Math/Matrix.h"

class Quaternion {
public:
    double r, i, j, k;
    Quaternion(double newR, double newI, double newJ, double newK);
    Quaternion(Matrix rotation);
    Quaternion();
    Matrix toMatrix();
};


#endif //ENGINE_QUATERNION_H
