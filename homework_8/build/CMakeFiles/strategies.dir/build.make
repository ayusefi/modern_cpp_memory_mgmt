# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8/build

# Include any dependencies generated for this target.
include CMakeFiles/strategies.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/strategies.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/strategies.dir/flags.make

CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o: CMakeFiles/strategies.dir/flags.make
CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o: ../task_2/src/IoStrategy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o -c /home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8/task_2/src/IoStrategy.cpp

CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8/task_2/src/IoStrategy.cpp > CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.i

CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8/task_2/src/IoStrategy.cpp -o CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.s

CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o.requires:

.PHONY : CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o.requires

CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o.provides: CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o.requires
	$(MAKE) -f CMakeFiles/strategies.dir/build.make CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o.provides.build
.PHONY : CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o.provides

CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o.provides.build: CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o


# Object files for target strategies
strategies_OBJECTS = \
"CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o"

# External object files for target strategies
strategies_EXTERNAL_OBJECTS =

libstrategies.a: CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o
libstrategies.a: CMakeFiles/strategies.dir/build.make
libstrategies.a: CMakeFiles/strategies.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libstrategies.a"
	$(CMAKE_COMMAND) -P CMakeFiles/strategies.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/strategies.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/strategies.dir/build: libstrategies.a

.PHONY : CMakeFiles/strategies.dir/build

CMakeFiles/strategies.dir/requires: CMakeFiles/strategies.dir/task_2/src/IoStrategy.cpp.o.requires

.PHONY : CMakeFiles/strategies.dir/requires

CMakeFiles/strategies.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/strategies.dir/cmake_clean.cmake
.PHONY : CMakeFiles/strategies.dir/clean

CMakeFiles/strategies.dir/depend:
	cd /home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8 /home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8 /home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8/build /home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8/build /home/abdullah/modern_cpp/modern_cpp_memory_mgmt/homework_8/build/CMakeFiles/strategies.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/strategies.dir/depend
