# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/107/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/107/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/david/Рабочий стол/Linal"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/david/Рабочий стол/Linal/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/VectorN.cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/VectorN.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VectorN.cpp.dir/flags.make

CMakeFiles/VectorN.cpp.dir/Vector2D.cpp.o: CMakeFiles/VectorN.cpp.dir/flags.make
CMakeFiles/VectorN.cpp.dir/Vector2D.cpp.o: ../Vector2D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/david/Рабочий стол/Linal/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VectorN.cpp.dir/Vector2D.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VectorN.cpp.dir/Vector2D.cpp.o -c "/home/david/Рабочий стол/Linal/Vector2D.cpp"

CMakeFiles/VectorN.cpp.dir/Vector2D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VectorN.cpp.dir/Vector2D.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/david/Рабочий стол/Linal/Vector2D.cpp" > CMakeFiles/VectorN.cpp.dir/Vector2D.cpp.i

CMakeFiles/VectorN.cpp.dir/Vector2D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VectorN.cpp.dir/Vector2D.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/david/Рабочий стол/Linal/Vector2D.cpp" -o CMakeFiles/VectorN.cpp.dir/Vector2D.cpp.s

CMakeFiles/VectorN.cpp.dir/Matrix.cpp.o: CMakeFiles/VectorN.cpp.dir/flags.make
CMakeFiles/VectorN.cpp.dir/Matrix.cpp.o: ../Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/david/Рабочий стол/Linal/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/VectorN.cpp.dir/Matrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VectorN.cpp.dir/Matrix.cpp.o -c "/home/david/Рабочий стол/Linal/Matrix.cpp"

CMakeFiles/VectorN.cpp.dir/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VectorN.cpp.dir/Matrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/david/Рабочий стол/Linal/Matrix.cpp" > CMakeFiles/VectorN.cpp.dir/Matrix.cpp.i

CMakeFiles/VectorN.cpp.dir/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VectorN.cpp.dir/Matrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/david/Рабочий стол/Linal/Matrix.cpp" -o CMakeFiles/VectorN.cpp.dir/Matrix.cpp.s

# Object files for target VectorN.cpp
VectorN_cpp_OBJECTS = \
"CMakeFiles/VectorN.cpp.dir/Vector2D.cpp.o" \
"CMakeFiles/VectorN.cpp.dir/Matrix.cpp.o"

# External object files for target VectorN.cpp
VectorN_cpp_EXTERNAL_OBJECTS =

VectorN.cpp: CMakeFiles/VectorN.cpp.dir/Vector2D.cpp.o
VectorN.cpp: CMakeFiles/VectorN.cpp.dir/Matrix.cpp.o
VectorN.cpp: CMakeFiles/VectorN.cpp.dir/build.make
VectorN.cpp: CMakeFiles/VectorN.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/david/Рабочий стол/Linal/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable VectorN.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VectorN.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VectorN.cpp.dir/build: VectorN.cpp

.PHONY : CMakeFiles/VectorN.cpp.dir/build

CMakeFiles/VectorN.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VectorN.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VectorN.cpp.dir/clean

CMakeFiles/VectorN.cpp.dir/depend:
	cd "/home/david/Рабочий стол/Linal/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/david/Рабочий стол/Linal" "/home/david/Рабочий стол/Linal" "/home/david/Рабочий стол/Linal/cmake-build-debug" "/home/david/Рабочий стол/Linal/cmake-build-debug" "/home/david/Рабочий стол/Linal/cmake-build-debug/CMakeFiles/VectorN.cpp.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/VectorN.cpp.dir/depend

