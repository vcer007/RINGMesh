# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/levy/Programming/Vorpaline/trunk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/levy/Programming/Vorpaline/trunk

# Include any dependencies generated for this target.
include src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/depend.make

# Include the progress variables for this target.
include src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/progress.make

# Include the compile flags for this target's objects.
include src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/flags.make

src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o: src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/flags.make
src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o: src/test/test_convex_cell/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/levy/Programming/Vorpaline/trunk/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o"
	cd /home/levy/Programming/Vorpaline/trunk/src/test/test_convex_cell && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_convex_cell.dir/main.cpp.o -c /home/levy/Programming/Vorpaline/trunk/src/test/test_convex_cell/main.cpp

src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_convex_cell.dir/main.cpp.i"
	cd /home/levy/Programming/Vorpaline/trunk/src/test/test_convex_cell && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/levy/Programming/Vorpaline/trunk/src/test/test_convex_cell/main.cpp > CMakeFiles/test_convex_cell.dir/main.cpp.i

src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_convex_cell.dir/main.cpp.s"
	cd /home/levy/Programming/Vorpaline/trunk/src/test/test_convex_cell && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/levy/Programming/Vorpaline/trunk/src/test/test_convex_cell/main.cpp -o CMakeFiles/test_convex_cell.dir/main.cpp.s

src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o.requires:

.PHONY : src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o.requires

src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o.provides: src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o.requires
	$(MAKE) -f src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/build.make src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o.provides.build
.PHONY : src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o.provides

src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o.provides.build: src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o


# Object files for target test_convex_cell
test_convex_cell_OBJECTS = \
"CMakeFiles/test_convex_cell.dir/main.cpp.o"

# External object files for target test_convex_cell
test_convex_cell_EXTERNAL_OBJECTS =

bin/test_convex_cell: src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o
bin/test_convex_cell: src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/build.make
bin/test_convex_cell: lib/libgeogram.so.1.3.4
bin/test_convex_cell: src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/levy/Programming/Vorpaline/trunk/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/test_convex_cell"
	cd /home/levy/Programming/Vorpaline/trunk/src/test/test_convex_cell && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_convex_cell.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/build: bin/test_convex_cell

.PHONY : src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/build

src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/requires: src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/main.cpp.o.requires

.PHONY : src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/requires

src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/clean:
	cd /home/levy/Programming/Vorpaline/trunk/src/test/test_convex_cell && $(CMAKE_COMMAND) -P CMakeFiles/test_convex_cell.dir/cmake_clean.cmake
.PHONY : src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/clean

src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/depend:
	cd /home/levy/Programming/Vorpaline/trunk && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/levy/Programming/Vorpaline/trunk /home/levy/Programming/Vorpaline/trunk/src/test/test_convex_cell /home/levy/Programming/Vorpaline/trunk /home/levy/Programming/Vorpaline/trunk/src/test/test_convex_cell /home/levy/Programming/Vorpaline/trunk/src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/test/test_convex_cell/CMakeFiles/test_convex_cell.dir/depend

