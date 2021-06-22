set(header_files
        Math/Vector2.h
        Math/Matrix.h
        Math/Quaternion.h
        Engine.h
        Entity.h
        Physics.h
        Box.h
        Graphics.h
        )
set(source_files
        Math/Vector2.cpp
        Math/Matrix.cpp
        Math/Quaternion.cpp
        Engine.cpp
        Physics.cpp
        Box.cpp
        Graphics.cpp
        )

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

add_library(libraries STATIC ${header_files} ${source_files} ${SDL2_LIBRARY})
target_include_directories(libraries PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})