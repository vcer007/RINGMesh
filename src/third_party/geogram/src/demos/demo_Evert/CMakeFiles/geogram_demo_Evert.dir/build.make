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
include src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/depend.make

# Include the progress variables for this target.
include src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/progress.make

# Include the compile flags for this target's objects.
include src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/flags.make

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o: src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/flags.make
src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o: src/demos/demo_Evert/generateGeometry.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/levy/Programming/Vorpaline/trunk/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o"
	cd /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o -c /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert/generateGeometry.cpp

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.i"
	cd /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert/generateGeometry.cpp > CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.i

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.s"
	cd /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert/generateGeometry.cpp -o CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.s

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o.requires:

.PHONY : src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o.requires

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o.provides: src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o.requires
	$(MAKE) -f src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/build.make src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o.provides.build
.PHONY : src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o.provides

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o.provides.build: src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o


src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o: src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/flags.make
src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o: src/demos/demo_Evert/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/levy/Programming/Vorpaline/trunk/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o"
	cd /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geogram_demo_Evert.dir/main.cpp.o -c /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert/main.cpp

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geogram_demo_Evert.dir/main.cpp.i"
	cd /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert/main.cpp > CMakeFiles/geogram_demo_Evert.dir/main.cpp.i

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geogram_demo_Evert.dir/main.cpp.s"
	cd /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert/main.cpp -o CMakeFiles/geogram_demo_Evert.dir/main.cpp.s

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o.requires:

.PHONY : src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o.requires

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o.provides: src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o.requires
	$(MAKE) -f src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/build.make src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o.provides.build
.PHONY : src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o.provides

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o.provides.build: src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o


# Object files for target geogram_demo_Evert
geogram_demo_Evert_OBJECTS = \
"CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o" \
"CMakeFiles/geogram_demo_Evert.dir/main.cpp.o"

# External object files for target geogram_demo_Evert
geogram_demo_Evert_EXTERNAL_OBJECTS =

bin/geogram_demo_Evert: src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o
bin/geogram_demo_Evert: src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o
bin/geogram_demo_Evert: src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/build.make
bin/geogram_demo_Evert: lib/libgeogram_gfx.so.1.3.4
bin/geogram_demo_Evert: lib/libgeogram.so.1.3.4
bin/geogram_demo_Evert: /usr/lib/x86_64-linux-gnu/libGLU.so
bin/geogram_demo_Evert: /usr/lib/x86_64-linux-gnu/libGL.so
bin/geogram_demo_Evert: src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/levy/Programming/Vorpaline/trunk/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../../bin/geogram_demo_Evert"
	cd /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/geogram_demo_Evert.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/build: bin/geogram_demo_Evert

.PHONY : src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/build

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/requires: src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/generateGeometry.cpp.o.requires
src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/requires: src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/main.cpp.o.requires

.PHONY : src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/requires

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/clean:
	cd /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert && $(CMAKE_COMMAND) -P CMakeFiles/geogram_demo_Evert.dir/cmake_clean.cmake
.PHONY : src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/clean

src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/depend:
	cd /home/levy/Programming/Vorpaline/trunk && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/levy/Programming/Vorpaline/trunk /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert /home/levy/Programming/Vorpaline/trunk /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert /home/levy/Programming/Vorpaline/trunk/src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/demos/demo_Evert/CMakeFiles/geogram_demo_Evert.dir/depend

