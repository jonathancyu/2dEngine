cmake_minimum_required(VERSION 3.13)
project(Engine)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")




add_subdirectory(lib)
add_subdirectory(tests)

add_executable(Engine_run src/main.cpp)
target_link_libraries(Engine_run libraries -lmingw32 -lSDL2main -lSDL2 -mwindows)
