# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/akingram/Code/imac/algo/helloworld

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/akingram/Code/imac/algo/helloworld/build

# Include any dependencies generated for this target.
include CMakeFiles/td02_ex02.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/td02_ex02.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/td02_ex02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/td02_ex02.dir/flags.make

CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.o: CMakeFiles/td02_ex02.dir/flags.make
CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.o: /Users/akingram/Code/imac/algo/helloworld/src/td02_ex02.cpp
CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.o: CMakeFiles/td02_ex02.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/akingram/Code/imac/algo/helloworld/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.o -MF CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.o.d -o CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.o -c /Users/akingram/Code/imac/algo/helloworld/src/td02_ex02.cpp

CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/akingram/Code/imac/algo/helloworld/src/td02_ex02.cpp > CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.i

CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/akingram/Code/imac/algo/helloworld/src/td02_ex02.cpp -o CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.s

# Object files for target td02_ex02
td02_ex02_OBJECTS = \
"CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.o"

# External object files for target td02_ex02
td02_ex02_EXTERNAL_OBJECTS =

td02_ex02: CMakeFiles/td02_ex02.dir/src/td02_ex02.cpp.o
td02_ex02: CMakeFiles/td02_ex02.dir/build.make
td02_ex02: CMakeFiles/td02_ex02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/akingram/Code/imac/algo/helloworld/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable td02_ex02"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/td02_ex02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/td02_ex02.dir/build: td02_ex02
.PHONY : CMakeFiles/td02_ex02.dir/build

CMakeFiles/td02_ex02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/td02_ex02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/td02_ex02.dir/clean

CMakeFiles/td02_ex02.dir/depend:
	cd /Users/akingram/Code/imac/algo/helloworld/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/akingram/Code/imac/algo/helloworld /Users/akingram/Code/imac/algo/helloworld /Users/akingram/Code/imac/algo/helloworld/build /Users/akingram/Code/imac/algo/helloworld/build /Users/akingram/Code/imac/algo/helloworld/build/CMakeFiles/td02_ex02.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/td02_ex02.dir/depend

