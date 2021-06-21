//
// Created by yucjo on 6/9/2021.
//

#ifndef ENGINE_MATRIX_H
#define ENGINE_MATRIX_H
#include <string>

class Matrix {
private:
    float** values;
public:
    int rows;
    int columns;
    Matrix(int r, int c);
    Matrix(int d);
    Matrix();

    Matrix(int r, int c, float** vals);

    ~Matrix();

    Matrix operator*(Matrix other);
    float* operator[](int i);
    bool operator==(Matrix other);

    Matrix transpose();

    std::string toString();
};


#endif //ENGINE_MATRIX_H
