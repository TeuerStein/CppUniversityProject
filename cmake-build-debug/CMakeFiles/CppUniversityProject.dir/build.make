# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Volumes/TSHDD/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Volumes/TSHDD/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/oleksandrsokolov/Projects/CppUniversityProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CppUniversityProject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CppUniversityProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CppUniversityProject.dir/flags.make

CMakeFiles/CppUniversityProject.dir/main.cpp.o: CMakeFiles/CppUniversityProject.dir/flags.make
CMakeFiles/CppUniversityProject.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CppUniversityProject.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppUniversityProject.dir/main.cpp.o -c /Users/oleksandrsokolov/Projects/CppUniversityProject/main.cpp

CMakeFiles/CppUniversityProject.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppUniversityProject.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/oleksandrsokolov/Projects/CppUniversityProject/main.cpp > CMakeFiles/CppUniversityProject.dir/main.cpp.i

CMakeFiles/CppUniversityProject.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppUniversityProject.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/oleksandrsokolov/Projects/CppUniversityProject/main.cpp -o CMakeFiles/CppUniversityProject.dir/main.cpp.s

CMakeFiles/CppUniversityProject.dir/Models/ClassesOfHeroes.cpp.o: CMakeFiles/CppUniversityProject.dir/flags.make
CMakeFiles/CppUniversityProject.dir/Models/ClassesOfHeroes.cpp.o: ../Models/ClassesOfHeroes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CppUniversityProject.dir/Models/ClassesOfHeroes.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppUniversityProject.dir/Models/ClassesOfHeroes.cpp.o -c /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/ClassesOfHeroes.cpp

CMakeFiles/CppUniversityProject.dir/Models/ClassesOfHeroes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppUniversityProject.dir/Models/ClassesOfHeroes.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/ClassesOfHeroes.cpp > CMakeFiles/CppUniversityProject.dir/Models/ClassesOfHeroes.cpp.i

CMakeFiles/CppUniversityProject.dir/Models/ClassesOfHeroes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppUniversityProject.dir/Models/ClassesOfHeroes.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/ClassesOfHeroes.cpp -o CMakeFiles/CppUniversityProject.dir/Models/ClassesOfHeroes.cpp.s

CMakeFiles/CppUniversityProject.dir/Models/Hero.cpp.o: CMakeFiles/CppUniversityProject.dir/flags.make
CMakeFiles/CppUniversityProject.dir/Models/Hero.cpp.o: ../Models/Hero.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CppUniversityProject.dir/Models/Hero.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppUniversityProject.dir/Models/Hero.cpp.o -c /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/Hero.cpp

CMakeFiles/CppUniversityProject.dir/Models/Hero.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppUniversityProject.dir/Models/Hero.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/Hero.cpp > CMakeFiles/CppUniversityProject.dir/Models/Hero.cpp.i

CMakeFiles/CppUniversityProject.dir/Models/Hero.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppUniversityProject.dir/Models/Hero.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/Hero.cpp -o CMakeFiles/CppUniversityProject.dir/Models/Hero.cpp.s

CMakeFiles/CppUniversityProject.dir/Models/DefaultMobs.cpp.o: CMakeFiles/CppUniversityProject.dir/flags.make
CMakeFiles/CppUniversityProject.dir/Models/DefaultMobs.cpp.o: ../Models/DefaultMobs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CppUniversityProject.dir/Models/DefaultMobs.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppUniversityProject.dir/Models/DefaultMobs.cpp.o -c /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/DefaultMobs.cpp

CMakeFiles/CppUniversityProject.dir/Models/DefaultMobs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppUniversityProject.dir/Models/DefaultMobs.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/DefaultMobs.cpp > CMakeFiles/CppUniversityProject.dir/Models/DefaultMobs.cpp.i

CMakeFiles/CppUniversityProject.dir/Models/DefaultMobs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppUniversityProject.dir/Models/DefaultMobs.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/DefaultMobs.cpp -o CMakeFiles/CppUniversityProject.dir/Models/DefaultMobs.cpp.s

CMakeFiles/CppUniversityProject.dir/Models/EpicMobs.cpp.o: CMakeFiles/CppUniversityProject.dir/flags.make
CMakeFiles/CppUniversityProject.dir/Models/EpicMobs.cpp.o: ../Models/EpicMobs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/CppUniversityProject.dir/Models/EpicMobs.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppUniversityProject.dir/Models/EpicMobs.cpp.o -c /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/EpicMobs.cpp

CMakeFiles/CppUniversityProject.dir/Models/EpicMobs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppUniversityProject.dir/Models/EpicMobs.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/EpicMobs.cpp > CMakeFiles/CppUniversityProject.dir/Models/EpicMobs.cpp.i

CMakeFiles/CppUniversityProject.dir/Models/EpicMobs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppUniversityProject.dir/Models/EpicMobs.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/EpicMobs.cpp -o CMakeFiles/CppUniversityProject.dir/Models/EpicMobs.cpp.s

CMakeFiles/CppUniversityProject.dir/Models/DungeonBoss.cpp.o: CMakeFiles/CppUniversityProject.dir/flags.make
CMakeFiles/CppUniversityProject.dir/Models/DungeonBoss.cpp.o: ../Models/DungeonBoss.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/CppUniversityProject.dir/Models/DungeonBoss.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppUniversityProject.dir/Models/DungeonBoss.cpp.o -c /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/DungeonBoss.cpp

CMakeFiles/CppUniversityProject.dir/Models/DungeonBoss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppUniversityProject.dir/Models/DungeonBoss.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/DungeonBoss.cpp > CMakeFiles/CppUniversityProject.dir/Models/DungeonBoss.cpp.i

CMakeFiles/CppUniversityProject.dir/Models/DungeonBoss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppUniversityProject.dir/Models/DungeonBoss.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/DungeonBoss.cpp -o CMakeFiles/CppUniversityProject.dir/Models/DungeonBoss.cpp.s

CMakeFiles/CppUniversityProject.dir/Models/TypesOfDamage.cpp.o: CMakeFiles/CppUniversityProject.dir/flags.make
CMakeFiles/CppUniversityProject.dir/Models/TypesOfDamage.cpp.o: ../Models/TypesOfDamage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/CppUniversityProject.dir/Models/TypesOfDamage.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppUniversityProject.dir/Models/TypesOfDamage.cpp.o -c /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/TypesOfDamage.cpp

CMakeFiles/CppUniversityProject.dir/Models/TypesOfDamage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppUniversityProject.dir/Models/TypesOfDamage.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/TypesOfDamage.cpp > CMakeFiles/CppUniversityProject.dir/Models/TypesOfDamage.cpp.i

CMakeFiles/CppUniversityProject.dir/Models/TypesOfDamage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppUniversityProject.dir/Models/TypesOfDamage.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/oleksandrsokolov/Projects/CppUniversityProject/Models/TypesOfDamage.cpp -o CMakeFiles/CppUniversityProject.dir/Models/TypesOfDamage.cpp.s

CMakeFiles/CppUniversityProject.dir/Views/Home.cpp.o: CMakeFiles/CppUniversityProject.dir/flags.make
CMakeFiles/CppUniversityProject.dir/Views/Home.cpp.o: ../Views/Home.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/CppUniversityProject.dir/Views/Home.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppUniversityProject.dir/Views/Home.cpp.o -c /Users/oleksandrsokolov/Projects/CppUniversityProject/Views/Home.cpp

CMakeFiles/CppUniversityProject.dir/Views/Home.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppUniversityProject.dir/Views/Home.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/oleksandrsokolov/Projects/CppUniversityProject/Views/Home.cpp > CMakeFiles/CppUniversityProject.dir/Views/Home.cpp.i

CMakeFiles/CppUniversityProject.dir/Views/Home.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppUniversityProject.dir/Views/Home.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/oleksandrsokolov/Projects/CppUniversityProject/Views/Home.cpp -o CMakeFiles/CppUniversityProject.dir/Views/Home.cpp.s

# Object files for target CppUniversityProject
CppUniversityProject_OBJECTS = \
"CMakeFiles/CppUniversityProject.dir/main.cpp.o" \
"CMakeFiles/CppUniversityProject.dir/Models/ClassesOfHeroes.cpp.o" \
"CMakeFiles/CppUniversityProject.dir/Models/Hero.cpp.o" \
"CMakeFiles/CppUniversityProject.dir/Models/DefaultMobs.cpp.o" \
"CMakeFiles/CppUniversityProject.dir/Models/EpicMobs.cpp.o" \
"CMakeFiles/CppUniversityProject.dir/Models/DungeonBoss.cpp.o" \
"CMakeFiles/CppUniversityProject.dir/Models/TypesOfDamage.cpp.o" \
"CMakeFiles/CppUniversityProject.dir/Views/Home.cpp.o"

# External object files for target CppUniversityProject
CppUniversityProject_EXTERNAL_OBJECTS =

CppUniversityProject: CMakeFiles/CppUniversityProject.dir/main.cpp.o
CppUniversityProject: CMakeFiles/CppUniversityProject.dir/Models/ClassesOfHeroes.cpp.o
CppUniversityProject: CMakeFiles/CppUniversityProject.dir/Models/Hero.cpp.o
CppUniversityProject: CMakeFiles/CppUniversityProject.dir/Models/DefaultMobs.cpp.o
CppUniversityProject: CMakeFiles/CppUniversityProject.dir/Models/EpicMobs.cpp.o
CppUniversityProject: CMakeFiles/CppUniversityProject.dir/Models/DungeonBoss.cpp.o
CppUniversityProject: CMakeFiles/CppUniversityProject.dir/Models/TypesOfDamage.cpp.o
CppUniversityProject: CMakeFiles/CppUniversityProject.dir/Views/Home.cpp.o
CppUniversityProject: CMakeFiles/CppUniversityProject.dir/build.make
CppUniversityProject: CMakeFiles/CppUniversityProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable CppUniversityProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CppUniversityProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CppUniversityProject.dir/build: CppUniversityProject

.PHONY : CMakeFiles/CppUniversityProject.dir/build

CMakeFiles/CppUniversityProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CppUniversityProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CppUniversityProject.dir/clean

CMakeFiles/CppUniversityProject.dir/depend:
	cd /Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/oleksandrsokolov/Projects/CppUniversityProject /Users/oleksandrsokolov/Projects/CppUniversityProject /Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug /Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug /Users/oleksandrsokolov/Projects/CppUniversityProject/cmake-build-debug/CMakeFiles/CppUniversityProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CppUniversityProject.dir/depend

