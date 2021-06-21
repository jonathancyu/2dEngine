//
// Created by yucjo on 5/14/2021.
//

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <Math/Vector2.h>
#include <Math/Matrix.h>
#include <iostream>
#include "catch_amalgamated.hpp"

TEST_CASE("Vector2", "[math]") {
    Vector2 a = Vector2(2, 3);
    Vector2 b = Vector2(1, 1);

    SECTION ("Addition") {
        REQUIRE((a+b) == Vector2(3, 4));
        Vector2 c = Vector2(-1, -1);
        c += a;
        REQUIRE(c == Vector2(1, 2));
    }

    SECTION ("Subtraction") {
        REQUIRE((a-b) == Vector2(1, 2));
    }

    SECTION ("Scalar Multiplication") {
        REQUIRE((a*1.5) == Vector2(3, 4.5));
    }

    SECTION ("Dot Product") {
        float result = 2*1 + 3*1;
        REQUIRE((a^b) == result);
    }
}

TEST_CASE("Matrix", "[math]") {
    Matrix a = Matrix();
    Matrix b = Matrix(3, 3);
    Matrix c = Matrix(3, 2);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            float* row = a[i];
            row[j] = j+(i*3);
            row = b[i];
            row[j] = a[i][j]+5;
            if (j < 2) {
                row = c[i];
                row[j] = j + (i*3);
            }
        }
    }

    SECTION("(3x3)x(3x3) Multiplication") {
        Matrix result = a*b;
        float expected[3][3] = {{30.f, 33.f, 36.f},
                          {102.f, 114.f, 126.f},
                          {174.f, 195.f, 216.f}};
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                REQUIRE(result[i][j] == expected[i][j]);
            }
        }
    }

    SECTION("(3x3)x(3x2) Multiplication") {
        Matrix result = b*c;
        float expected[3][2] = {{60, 78},
                                {87, 114},
                                {114, 150}};
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                REQUIRE(result[i][j] == expected[i][j]);
            }
        }
    }
}