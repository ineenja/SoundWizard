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
CMAKE_SOURCE_DIR = C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\isignal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-isignal-Desktop_Qt_5_14_2_MinGW_64_bit-Debu_kakai_suda

# Include any dependencies generated for this target.
include CMakeFiles/isignal.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/isignal.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/isignal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/isignal.dir/flags.make

CMakeFiles/isignal.dir/isignal.cpp.obj: CMakeFiles/isignal.dir/flags.make
CMakeFiles/isignal.dir/isignal.cpp.obj: CMakeFiles/isignal.dir/includes_CXX.rsp
CMakeFiles/isignal.dir/isignal.cpp.obj: C:/Users/theiz/OneDrive/Desktop/EngPathStuff/cppSTC/SoundWizardTop/SoundWizard/isignal/isignal.cpp
CMakeFiles/isignal.dir/isignal.cpp.obj: CMakeFiles/isignal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-isignal-Desktop_Qt_5_14_2_MinGW_64_bit-Debu_kakai_suda\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/isignal.dir/isignal.cpp.obj"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/isignal.dir/isignal.cpp.obj -MF CMakeFiles\isignal.dir\isignal.cpp.obj.d -o CMakeFiles\isignal.dir\isignal.cpp.obj -c C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\isignal\isignal.cpp

CMakeFiles/isignal.dir/isignal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/isignal.dir/isignal.cpp.i"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\isignal\isignal.cpp > CMakeFiles\isignal.dir\isignal.cpp.i

CMakeFiles/isignal.dir/isignal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/isignal.dir/isignal.cpp.s"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\isignal\isignal.cpp -o CMakeFiles\isignal.dir\isignal.cpp.s

# Object files for target isignal
isignal_OBJECTS = \
"CMakeFiles/isignal.dir/isignal.cpp.obj"

# External object files for target isignal
isignal_EXTERNAL_OBJECTS =

libisignal.dll: CMakeFiles/isignal.dir/isignal.cpp.obj
libisignal.dll: CMakeFiles/isignal.dir/build.make
libisignal.dll: CMakeFiles/isignal.dir/linkLibs.rsp
libisignal.dll: CMakeFiles/isignal.dir/objects1.rsp
libisignal.dll: CMakeFiles/isignal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-isignal-Desktop_Qt_5_14_2_MinGW_64_bit-Debu_kakai_suda\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libisignal.dll"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\isignal.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/isignal.dir/build: libisignal.dll
.PHONY : CMakeFiles/isignal.dir/build

CMakeFiles/isignal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\isignal.dir\cmake_clean.cmake
.PHONY : CMakeFiles/isignal.dir/clean

CMakeFiles/isignal.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\isignal C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\SoundWizard\isignal C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-isignal-Desktop_Qt_5_14_2_MinGW_64_bit-Debu_kakai_suda C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-isignal-Desktop_Qt_5_14_2_MinGW_64_bit-Debu_kakai_suda C:\Users\theiz\OneDrive\Desktop\EngPathStuff\cppSTC\SoundWizardTop\build-isignal-Desktop_Qt_5_14_2_MinGW_64_bit-Debu_kakai_suda\CMakeFiles\isignal.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/isignal.dir/depend

