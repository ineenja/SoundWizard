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
include genfactory/CMakeFiles/genfactory.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include genfactory/CMakeFiles/genfactory.dir/compiler_depend.make

# Include the progress variables for this target.
include genfactory/CMakeFiles/genfactory.dir/progress.make

# Include the compile flags for this target's objects.
include genfactory/CMakeFiles/genfactory.dir/flags.make

genfactory/CMakeFiles/genfactory.dir/src/genfactory.cpp.obj: genfactory/CMakeFiles/genfactory.dir/flags.make
genfactory/CMakeFiles/genfactory.dir/src/genfactory.cpp.obj: genfactory/CMakeFiles/genfactory.dir/includes_CXX.rsp
genfactory/CMakeFiles/genfactory.dir/src/genfactory.cpp.obj: C:/Users/theiz/OneDrive/Desktop/EngPathStuff/cppSTC/SoundWizardTop/SoundWizard/genfactory/src/genfactory.cpp
genfactory/CMakeFiles/genfactory.dir/src/genfactory.cpp.obj: genfactory/CMakeFiles/genfactory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object genfactory/CMakeFiles/genfactory.dir/src/genfactory.cpp.obj"
	cd /d C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket\genfactory && C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT genfactory/CMakeFiles/genfactory.dir/src/genfactory.cpp.obj -MF CMakeFiles\genfactory.dir\src\genfactory.cpp.obj.d -o CMakeFiles\genfactory.dir\src\genfactory.cpp.obj -c C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\genfactory\src\genfactory.cpp

genfactory/CMakeFiles/genfactory.dir/src/genfactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/genfactory.dir/src/genfactory.cpp.i"
	cd /d C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket\genfactory && C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\genfactory\src\genfactory.cpp > CMakeFiles\genfactory.dir\src\genfactory.cpp.i

genfactory/CMakeFiles/genfactory.dir/src/genfactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/genfactory.dir/src/genfactory.cpp.s"
	cd /d C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket\genfactory && C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\genfactory\src\genfactory.cpp -o CMakeFiles\genfactory.dir\src\genfactory.cpp.s

# Object files for target genfactory
genfactory_OBJECTS = \
"CMakeFiles/genfactory.dir/src/genfactory.cpp.obj"

# External object files for target genfactory
genfactory_EXTERNAL_OBJECTS =

soundwizard/binaries/libgenfactory.dll: genfactory/CMakeFiles/genfactory.dir/src/genfactory.cpp.obj
soundwizard/binaries/libgenfactory.dll: genfactory/CMakeFiles/genfactory.dir/build.make
soundwizard/binaries/libgenfactory.dll: generators/audiogenerator/harmonicgenerator/libharmonicgenerator.dll.a
soundwizard/binaries/libgenfactory.dll: generators/audiogenerator/libaudiogenerator.dll.a
soundwizard/binaries/libgenfactory.dll: generators/igenerator/libigenerator.dll.a
soundwizard/binaries/libgenfactory.dll: parser/readfromfile/libreadfromfile.dll.a
soundwizard/binaries/libgenfactory.dll: parameters/harmparameters/libharmparameters.dll.a
soundwizard/binaries/libgenfactory.dll: parameters/iparameters/libiparameters.dll.a
soundwizard/binaries/libgenfactory.dll: signals/audiosignal/libaudiosignal.dll.a
soundwizard/binaries/libgenfactory.dll: signals/isignal/libisignal.dll.a
soundwizard/binaries/libgenfactory.dll: genfactory/CMakeFiles/genfactory.dir/linkLibs.rsp
soundwizard/binaries/libgenfactory.dll: genfactory/CMakeFiles/genfactory.dir/objects1.rsp
soundwizard/binaries/libgenfactory.dll: genfactory/CMakeFiles/genfactory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ..\soundwizard\binaries\libgenfactory.dll"
	cd /d C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket\genfactory && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\genfactory.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
genfactory/CMakeFiles/genfactory.dir/build: soundwizard/binaries/libgenfactory.dll
.PHONY : genfactory/CMakeFiles/genfactory.dir/build

genfactory/CMakeFiles/genfactory.dir/clean:
	cd /d C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket\genfactory && $(CMAKE_COMMAND) -P CMakeFiles\genfactory.dir\cmake_clean.cmake
.PHONY : genfactory/CMakeFiles/genfactory.dir/clean

genfactory/CMakeFiles/genfactory.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\genfactory C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket\genfactory C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-soundwizards_main_shiting_bucket\genfactory\CMakeFiles\genfactory.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : genfactory/CMakeFiles/genfactory.dir/depend

