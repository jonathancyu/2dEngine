//
// Created by yucjo on 5/12/2021.
//

#include <vector>
#include <string>

#ifndef ENGINE_VECTOR_H
#define ENGINE_VECTOR_H


class Vector2 {
public:
    float x;
    float y;

    Vector2(float x, float y);
    Vector2();

    ~Vector2();



    bool operator==(const Vector2&) const;
    Vector2 operator+(const Vector2&) const;
    Vector2 operator+=(const Vector2& right);
    Vector2 operator-(const Vector2&) const;
    Vector2 operator*(float) const;
    Vector2 operator/(float) const;
    float operator^(const Vector2&) const;

    std::string toString() const;
};


#endif //ENGINE_VECTOR_H
