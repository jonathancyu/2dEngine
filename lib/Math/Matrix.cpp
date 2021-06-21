//
// Created by yucjo on 6/9/2021.
//

#include <string>
#include "Matrix.h"


Matrix::Matrix(int r, int c) {
    rows = r;
    columns = c;
    values = new float*[r];
    for (int i = 0; i < r; i++) {
        values[i] = new float[c];
        for (int j = 0; j < c; j++) {
            values[i][j] = 0;
        }
    }
}

Matrix::Matrix(int d) : Matrix(d, d) {};
Matrix::Matrix() : Matrix(3, 3) {};

Matrix::Matrix(int r, int c, float **vals) {
    rows = r;
    columns = c;
    values = vals;
}

Matrix::~Matrix() {
    for (int i = 0; i < rows; i++) {
        delete values[i];
    }
    delete values;
}

//TODO: throw exception
Matrix Matrix::operator*(Matrix rhs) {
    if (columns == rhs.rows) {
        Matrix result = Matrix(rows, rhs.columns);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rhs.columns; j++) {
                float dot = 0.f;
                for (int k = 0; k < columns; k++) {
                    dot += values[i][k] * rhs[k][j];
                }
                result[i][j] = dot;
            }
        }
        return result;
    }
    return {};
}

float* Matrix::operator[](int r) {
    return values[r];
}

Matrix Matrix::transpose() {
    Matrix result = Matrix(columns, rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[j][i] = values[i][j];
        }
    }
    return result;
}

bool Matrix::operator==(Matrix other) {
    if (rows != other.rows || columns != other.columns) {
        return false;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (values[i][j] != other[i][j]) {
                return false;
            }
        }
    }
    return true;
}

std::string Matrix::toString() {
    std::string result;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result += std::to_string(values[i][j]);
            result += " ";
        }
        result += '\n';
    }
    return result;
}
