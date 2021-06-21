//
// Created by yucjo on 6/9/2021.
//

#include "Quaternion.h"

Quaternion::Quaternion(float newR, float newI, float newJ, float newK) {
    r = newR;
    i = newI;
    j = newJ;
    k = newK;
}

Quaternion::Quaternion(Matrix rotation) {

}

Quaternion::Quaternion() : Quaternion(0, 1, 0, 0) {};

Matrix Quaternion::toMatrix() {
    return {};
}
