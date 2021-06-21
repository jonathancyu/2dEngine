//
// Created by yucjo on 5/12/2021.
//

#include <vector>
#include <string>

#ifndef ENGINE_VECTOR_H
#define ENGINE_VECTOR_H


class Vector2 {
public:
    double x;
    double y;

    Vector2(double x, double y);
    Vector2();

    ~Vector2();

    double size();



    bool operator==(const Vector2&) const;
    Vector2 operator+(const Vector2&) const;
    Vector2 operator+=(const Vector2& right);
    Vector2 operator-(const Vector2&) const;
    Vector2 operator*(double) const;
    Vector2 operator/(double) const;
    double operator^(const Vector2&) const;

    std::string toString() const;
};


#endif //ENGINE_VECTOR_H
