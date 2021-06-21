//
// Created by yucjo on 5/12/2021.
//

#include "Vector2.h"
#include <cmath>

Vector2::Vector2(double _x, double _y) {
    x = _x;
    y = _y;
}

Vector2::Vector2() : Vector2(0, 0) {}

Vector2::~Vector2() = default;

bool Vector2::operator==(const Vector2& right) const {
    return (x == right.x) && (y == right.y);
}

Vector2 Vector2::operator+(const Vector2& right) const {
    return Vector2(x + right.x, y + right.y);
}

Vector2 Vector2::operator+=(const Vector2& right) {
    x += right.x;
    y += right.y;
    return *this;
}


Vector2 Vector2::operator-(const Vector2& right) const {
    return Vector2(x - right.x, y - right.y);
}

Vector2 Vector2::operator*(double right) const {
    return Vector2(x * right, y * right);
}

Vector2 Vector2::operator/(double right) const {
    return Vector2(x / right, y / right);
}

double Vector2::operator^(const Vector2& right) const {
    return x*right.x + y*right.y;
}
std::string Vector2::toString() const {
    std::string result = "<";
    result += (char)x;
    result += ", ";
    result += (char)y;
    return result + ">";
}

double Vector2::size() {
    return  sqrt(x*x + y*x);
}
