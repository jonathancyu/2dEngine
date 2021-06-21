//
// Created by yucjo on 5/15/2021.
//



//
// Created by yucjo on 5/14/2021.
//

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "Box.h"
#include "Physics.h"
#include "catch_amalgamated.hpp"

TEST_CASE("Collision", "[Box]") {
    SECTION("BoundingBoxes") {
        Box cube = Box(20, 30, 40, 40);
        BoundingBox box = cube.getBounds();
        REQUIRE(box.left == 20);
        REQUIRE(box.right == 60);
        REQUIRE(box.bottom == 30);
        REQUIRE(box.top == 70);
    }

    Physics phys = Physics();
    Box* a = new Box(20, 20, 40, 40);
    Box* b = new Box(50, 50, 40, 40);
    Box* c = new Box(20, 20, 10, 10);

    SECTION("a, b are colliding") {
        REQUIRE(phys.colliding(a, b) == true);
    }
    SECTION("a, c are colliding") {
        REQUIRE(phys.colliding(a, c) == true);
    }
    SECTION("b, c aren't colliding") {
        REQUIRE(phys.colliding(b, c) == false);
    }
}
