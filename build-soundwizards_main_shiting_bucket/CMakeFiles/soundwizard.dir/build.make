# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket

# Include any dependencies generated for this target.
include CMakeFiles/soundwizard.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/soundwizard.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/soundwizard.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/soundwizard.dir/flags.make

CMakeFiles/soundwizard.dir/main.cpp.obj: CMakeFiles/soundwizard.dir/flags.make
CMakeFiles/soundwizard.dir/main.cpp.obj: CMakeFiles/soundwizard.dir/includes_CXX.rsp
CMakeFiles/soundwizard.dir/main.cpp.obj: C:/Users/theiz/OneDrive/Desktop/EngPathStuff/cppSTC/SoundWizardTop/SoundWizard/main.cpp
CMakeFiles/soundwizard.dir/main.cpp.obj: CMakeFiles/soundwizard.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/soundwizard.dir/main.cpp.obj"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/soundwizard.dir/main.cpp.obj -MF CMakeFiles\soundwizard.dir\main.cpp.obj.d -o CMakeFiles\soundwizard.dir\main.cpp.obj -c C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\main.cpp

CMakeFiles/soundwizard.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/soundwizard.dir/main.cpp.i"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\main.cpp > CMakeFiles\soundwizard.dir\main.cpp.i

CMakeFiles/soundwizard.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/soundwizard.dir/main.cpp.s"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\main.cpp -o CMakeFiles\soundwizard.dir\main.cpp.s

# Object files for target soundwizard
soundwizard_OBJECTS = \
"CMakeFiles/soundwizard.dir/main.cpp.obj"

# External object files for target soundwizard
soundwizard_EXTERNAL_OBJECTS =

soundwizard/binaries/soundwizard.exe: CMakeFiles/soundwizard.dir/main.cpp.obj
soundwizard/binaries/soundwizard.exe: CMakeFiles/soundwizard.dir/build.make
soundwizard/binaries/soundwizard.exe: sound/libsound.dll.a
soundwizard/binaries/soundwizard.exe: genfactory/libgenfactory.dll.a
soundwizard/binaries/soundwizard.exe: generators/audiogenerator/harmonicgenerator/libharmonicgenerator.dll.a
soundwizard/binaries/soundwizard.exe: generators/audiogenerator/libaudiogenerator.dll.a
soundwizard/binaries/soundwizard.exe: generators/igenerator/libigenerator.dll.a
soundwizard/binaries/soundwizard.exe: signal/libsignal.dll.a
soundwizard/binaries/soundwizard.exe: parser/readfromfile/libreadfromfile.dll.a
soundwizard/binaries/soundwizard.exe: parser/writetofile/libwritetofile.dll.a
soundwizard/binaries/soundwizard.exe: parameters/harmparameters/libharmparameters.dll.a
soundwizard/binaries/soundwizard.exe: parameters/iparameters/libiparameters.dll.a
soundwizard/binaries/soundwizard.exe: CMakeFiles/soundwizard.dir/linkLibs.rsp
soundwizard/binaries/soundwizard.exe: CMakeFiles/soundwizard.dir/objects1.rsp
soundwizard/binaries/soundwizard.exe: CMakeFiles/soundwizard.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable soundwizard\binaries\soundwizard.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\soundwizard.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/soundwizard.dir/build: soundwizard/binaries/soundwizard.exe
.PHONY : CMakeFiles/soundwizard.dir/build

CMakeFiles/soundwizard.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\soundwizard.dir\cmake_clean.cmake
.PHONY : CMakeFiles/soundwizard.dir/clean

CMakeFiles/soundwizard.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket\CMakeFiles\soundwizard.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/soundwizard.dir/depend

