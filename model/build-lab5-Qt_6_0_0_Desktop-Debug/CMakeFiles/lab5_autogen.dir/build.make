# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/qmob/Downloads/Treinamento C++/aula4/lab5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/qmob/Downloads/Treinamento C++/aula4/build-lab5-Qt_6_0_0_Desktop-Debug"

# Utility rule file for lab5_autogen.

# Include the progress variables for this target.
include CMakeFiles/lab5_autogen.dir/progress.make

CMakeFiles/lab5_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/qmob/Downloads/Treinamento C++/aula4/build-lab5-Qt_6_0_0_Desktop-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target lab5"
	/usr/bin/cmake -E cmake_autogen "/home/qmob/Downloads/Treinamento C++/aula4/build-lab5-Qt_6_0_0_Desktop-Debug/CMakeFiles/lab5_autogen.dir/AutogenInfo.json" Debug

lab5_autogen: CMakeFiles/lab5_autogen
lab5_autogen: CMakeFiles/lab5_autogen.dir/build.make

.PHONY : lab5_autogen

# Rule to build all files generated by this target.
CMakeFiles/lab5_autogen.dir/build: lab5_autogen

.PHONY : CMakeFiles/lab5_autogen.dir/build

CMakeFiles/lab5_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab5_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab5_autogen.dir/clean

CMakeFiles/lab5_autogen.dir/depend:
	cd "/home/qmob/Downloads/Treinamento C++/aula4/build-lab5-Qt_6_0_0_Desktop-Debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/qmob/Downloads/Treinamento C++/aula4/lab5" "/home/qmob/Downloads/Treinamento C++/aula4/lab5" "/home/qmob/Downloads/Treinamento C++/aula4/build-lab5-Qt_6_0_0_Desktop-Debug" "/home/qmob/Downloads/Treinamento C++/aula4/build-lab5-Qt_6_0_0_Desktop-Debug" "/home/qmob/Downloads/Treinamento C++/aula4/build-lab5-Qt_6_0_0_Desktop-Debug/CMakeFiles/lab5_autogen.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lab5_autogen.dir/depend

