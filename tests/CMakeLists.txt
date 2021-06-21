set(tests
        MathTests.cpp
        CollisionTests.cpp)


add_executable(catch_tests_run ${tests} catch_amalgamated.hpp catch_amalgamated.cpp)
target_link_libraries(catch_tests_run libraries -lmingw32 -lSDL2main -lSDL2 -mwindows)