# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\yucjo\Documents\2021 summer\Engine"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\yucjo\Documents\2021 summer\Engine\cmake-build-debug"

# Include any dependencies generated for this target.
include lib/CMakeFiles/libraries.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/libraries.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/libraries.dir/flags.make

lib/CMakeFiles/libraries.dir/Math/Vector2.cpp.obj: lib/CMakeFiles/libraries.dir/flags.make
lib/CMakeFiles/libraries.dir/Math/Vector2.cpp.obj: lib/CMakeFiles/libraries.dir/includes_CXX.rsp
lib/CMakeFiles/libraries.dir/Math/Vector2.cpp.obj: ../lib/Math/Vector2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\yucjo\Documents\2021 summer\Engine\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/libraries.dir/Math/Vector2.cpp.obj"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\libraries.dir\Math\Vector2.cpp.obj -c "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Math\Vector2.cpp"

lib/CMakeFiles/libraries.dir/Math/Vector2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libraries.dir/Math/Vector2.cpp.i"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Math\Vector2.cpp" > CMakeFiles\libraries.dir\Math\Vector2.cpp.i

lib/CMakeFiles/libraries.dir/Math/Vector2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libraries.dir/Math/Vector2.cpp.s"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Math\Vector2.cpp" -o CMakeFiles\libraries.dir\Math\Vector2.cpp.s

lib/CMakeFiles/libraries.dir/Math/Matrix.cpp.obj: lib/CMakeFiles/libraries.dir/flags.make
lib/CMakeFiles/libraries.dir/Math/Matrix.cpp.obj: lib/CMakeFiles/libraries.dir/includes_CXX.rsp
lib/CMakeFiles/libraries.dir/Math/Matrix.cpp.obj: ../lib/Math/Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\yucjo\Documents\2021 summer\Engine\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/CMakeFiles/libraries.dir/Math/Matrix.cpp.obj"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\libraries.dir\Math\Matrix.cpp.obj -c "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Math\Matrix.cpp"

lib/CMakeFiles/libraries.dir/Math/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libraries.dir/Math/Matrix.cpp.i"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Math\Matrix.cpp" > CMakeFiles\libraries.dir\Math\Matrix.cpp.i

lib/CMakeFiles/libraries.dir/Math/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libraries.dir/Math/Matrix.cpp.s"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Math\Matrix.cpp" -o CMakeFiles\libraries.dir\Math\Matrix.cpp.s

lib/CMakeFiles/libraries.dir/Math/Quaternion.cpp.obj: lib/CMakeFiles/libraries.dir/flags.make
lib/CMakeFiles/libraries.dir/Math/Quaternion.cpp.obj: lib/CMakeFiles/libraries.dir/includes_CXX.rsp
lib/CMakeFiles/libraries.dir/Math/Quaternion.cpp.obj: ../lib/Math/Quaternion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\yucjo\Documents\2021 summer\Engine\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/CMakeFiles/libraries.dir/Math/Quaternion.cpp.obj"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\libraries.dir\Math\Quaternion.cpp.obj -c "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Math\Quaternion.cpp"

lib/CMakeFiles/libraries.dir/Math/Quaternion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libraries.dir/Math/Quaternion.cpp.i"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Math\Quaternion.cpp" > CMakeFiles\libraries.dir\Math\Quaternion.cpp.i

lib/CMakeFiles/libraries.dir/Math/Quaternion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libraries.dir/Math/Quaternion.cpp.s"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Math\Quaternion.cpp" -o CMakeFiles\libraries.dir\Math\Quaternion.cpp.s

lib/CMakeFiles/libraries.dir/Physics.cpp.obj: lib/CMakeFiles/libraries.dir/flags.make
lib/CMakeFiles/libraries.dir/Physics.cpp.obj: lib/CMakeFiles/libraries.dir/includes_CXX.rsp
lib/CMakeFiles/libraries.dir/Physics.cpp.obj: ../lib/Physics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\yucjo\Documents\2021 summer\Engine\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/CMakeFiles/libraries.dir/Physics.cpp.obj"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\libraries.dir\Physics.cpp.obj -c "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Physics.cpp"

lib/CMakeFiles/libraries.dir/Physics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libraries.dir/Physics.cpp.i"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Physics.cpp" > CMakeFiles\libraries.dir\Physics.cpp.i

lib/CMakeFiles/libraries.dir/Physics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libraries.dir/Physics.cpp.s"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Physics.cpp" -o CMakeFiles\libraries.dir\Physics.cpp.s

lib/CMakeFiles/libraries.dir/Box.cpp.obj: lib/CMakeFiles/libraries.dir/flags.make
lib/CMakeFiles/libraries.dir/Box.cpp.obj: lib/CMakeFiles/libraries.dir/includes_CXX.rsp
lib/CMakeFiles/libraries.dir/Box.cpp.obj: ../lib/Box.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\yucjo\Documents\2021 summer\Engine\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/CMakeFiles/libraries.dir/Box.cpp.obj"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\libraries.dir\Box.cpp.obj -c "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Box.cpp"

lib/CMakeFiles/libraries.dir/Box.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libraries.dir/Box.cpp.i"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Box.cpp" > CMakeFiles\libraries.dir\Box.cpp.i

lib/CMakeFiles/libraries.dir/Box.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libraries.dir/Box.cpp.s"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\yucjo\Documents\2021 summer\Engine\lib\Box.cpp" -o CMakeFiles\libraries.dir\Box.cpp.s

# Object files for target libraries
libraries_OBJECTS = \
"CMakeFiles/libraries.dir/Math/Vector2.cpp.obj" \
"CMakeFiles/libraries.dir/Math/Matrix.cpp.obj" \
"CMakeFiles/libraries.dir/Math/Quaternion.cpp.obj" \
"CMakeFiles/libraries.dir/Physics.cpp.obj" \
"CMakeFiles/libraries.dir/Box.cpp.obj"

# External object files for target libraries
libraries_EXTERNAL_OBJECTS =

lib/liblibraries.a: lib/CMakeFiles/libraries.dir/Math/Vector2.cpp.obj
lib/liblibraries.a: lib/CMakeFiles/libraries.dir/Math/Matrix.cpp.obj
lib/liblibraries.a: lib/CMakeFiles/libraries.dir/Math/Quaternion.cpp.obj
lib/liblibraries.a: lib/CMakeFiles/libraries.dir/Physics.cpp.obj
lib/liblibraries.a: lib/CMakeFiles/libraries.dir/Box.cpp.obj
lib/liblibraries.a: lib/CMakeFiles/libraries.dir/build.make
lib/liblibraries.a: lib/CMakeFiles/libraries.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\yucjo\Documents\2021 summer\Engine\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library liblibraries.a"
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && $(CMAKE_COMMAND) -P CMakeFiles\libraries.dir\cmake_clean_target.cmake
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\libraries.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/libraries.dir/build: lib/liblibraries.a

.PHONY : lib/CMakeFiles/libraries.dir/build

lib/CMakeFiles/libraries.dir/clean:
	cd /d C:\Users\yucjo\DOCUME~1\2021SU~1\Engine\CMAKE-~1\lib && $(CMAKE_COMMAND) -P CMakeFiles\libraries.dir\cmake_clean.cmake
.PHONY : lib/CMakeFiles/libraries.dir/clean

lib/CMakeFiles/libraries.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\yucjo\Documents\2021 summer\Engine" "C:\Users\yucjo\Documents\2021 summer\Engine\lib" "C:\Users\yucjo\Documents\2021 summer\Engine\cmake-build-debug" "C:\Users\yucjo\Documents\2021 summer\Engine\cmake-build-debug\lib" "C:\Users\yucjo\Documents\2021 summer\Engine\cmake-build-debug\lib\CMakeFiles\libraries.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : lib/CMakeFiles/libraries.dir/depend
