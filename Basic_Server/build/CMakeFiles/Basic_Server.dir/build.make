# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/areay7/QtCode/HST_Code/Basic_Server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/areay7/QtCode/HST_Code/Basic_Server/build

# Include any dependencies generated for this target.
include CMakeFiles/Basic_Server.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Basic_Server.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Basic_Server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Basic_Server.dir/flags.make

CMakeFiles/Basic_Server.dir/codegen:
.PHONY : CMakeFiles/Basic_Server.dir/codegen

CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.o: CMakeFiles/Basic_Server.dir/flags.make
CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.o: /Users/areay7/QtCode/HST_Code/Basic_Server/module/Ice/Custom.cpp
CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.o: CMakeFiles/Basic_Server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/areay7/QtCode/HST_Code/Basic_Server/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.o -MF CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.o.d -o CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.o -c /Users/areay7/QtCode/HST_Code/Basic_Server/module/Ice/Custom.cpp

CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/areay7/QtCode/HST_Code/Basic_Server/module/Ice/Custom.cpp > CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.i

CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/areay7/QtCode/HST_Code/Basic_Server/module/Ice/Custom.cpp -o CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.s

CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.o: CMakeFiles/Basic_Server.dir/flags.make
CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.o: /Users/areay7/QtCode/HST_Code/Basic_Server/module/Ice/CustomImpl.cpp
CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.o: CMakeFiles/Basic_Server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/areay7/QtCode/HST_Code/Basic_Server/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.o -MF CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.o.d -o CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.o -c /Users/areay7/QtCode/HST_Code/Basic_Server/module/Ice/CustomImpl.cpp

CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/areay7/QtCode/HST_Code/Basic_Server/module/Ice/CustomImpl.cpp > CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.i

CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/areay7/QtCode/HST_Code/Basic_Server/module/Ice/CustomImpl.cpp -o CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.s

CMakeFiles/Basic_Server.dir/src/IceServer.cpp.o: CMakeFiles/Basic_Server.dir/flags.make
CMakeFiles/Basic_Server.dir/src/IceServer.cpp.o: /Users/areay7/QtCode/HST_Code/Basic_Server/src/IceServer.cpp
CMakeFiles/Basic_Server.dir/src/IceServer.cpp.o: CMakeFiles/Basic_Server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/areay7/QtCode/HST_Code/Basic_Server/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Basic_Server.dir/src/IceServer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Basic_Server.dir/src/IceServer.cpp.o -MF CMakeFiles/Basic_Server.dir/src/IceServer.cpp.o.d -o CMakeFiles/Basic_Server.dir/src/IceServer.cpp.o -c /Users/areay7/QtCode/HST_Code/Basic_Server/src/IceServer.cpp

CMakeFiles/Basic_Server.dir/src/IceServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Basic_Server.dir/src/IceServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/areay7/QtCode/HST_Code/Basic_Server/src/IceServer.cpp > CMakeFiles/Basic_Server.dir/src/IceServer.cpp.i

CMakeFiles/Basic_Server.dir/src/IceServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Basic_Server.dir/src/IceServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/areay7/QtCode/HST_Code/Basic_Server/src/IceServer.cpp -o CMakeFiles/Basic_Server.dir/src/IceServer.cpp.s

CMakeFiles/Basic_Server.dir/src/main.cpp.o: CMakeFiles/Basic_Server.dir/flags.make
CMakeFiles/Basic_Server.dir/src/main.cpp.o: /Users/areay7/QtCode/HST_Code/Basic_Server/src/main.cpp
CMakeFiles/Basic_Server.dir/src/main.cpp.o: CMakeFiles/Basic_Server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/areay7/QtCode/HST_Code/Basic_Server/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Basic_Server.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Basic_Server.dir/src/main.cpp.o -MF CMakeFiles/Basic_Server.dir/src/main.cpp.o.d -o CMakeFiles/Basic_Server.dir/src/main.cpp.o -c /Users/areay7/QtCode/HST_Code/Basic_Server/src/main.cpp

CMakeFiles/Basic_Server.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Basic_Server.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/areay7/QtCode/HST_Code/Basic_Server/src/main.cpp > CMakeFiles/Basic_Server.dir/src/main.cpp.i

CMakeFiles/Basic_Server.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Basic_Server.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/areay7/QtCode/HST_Code/Basic_Server/src/main.cpp -o CMakeFiles/Basic_Server.dir/src/main.cpp.s

# Object files for target Basic_Server
Basic_Server_OBJECTS = \
"CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.o" \
"CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.o" \
"CMakeFiles/Basic_Server.dir/src/IceServer.cpp.o" \
"CMakeFiles/Basic_Server.dir/src/main.cpp.o"

# External object files for target Basic_Server
Basic_Server_EXTERNAL_OBJECTS =

Basic_Server: CMakeFiles/Basic_Server.dir/module/Ice/Custom.cpp.o
Basic_Server: CMakeFiles/Basic_Server.dir/module/Ice/CustomImpl.cpp.o
Basic_Server: CMakeFiles/Basic_Server.dir/src/IceServer.cpp.o
Basic_Server: CMakeFiles/Basic_Server.dir/src/main.cpp.o
Basic_Server: CMakeFiles/Basic_Server.dir/build.make
Basic_Server: CMakeFiles/Basic_Server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/areay7/QtCode/HST_Code/Basic_Server/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Basic_Server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Basic_Server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Basic_Server.dir/build: Basic_Server
.PHONY : CMakeFiles/Basic_Server.dir/build

CMakeFiles/Basic_Server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Basic_Server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Basic_Server.dir/clean

CMakeFiles/Basic_Server.dir/depend:
	cd /Users/areay7/QtCode/HST_Code/Basic_Server/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/areay7/QtCode/HST_Code/Basic_Server /Users/areay7/QtCode/HST_Code/Basic_Server /Users/areay7/QtCode/HST_Code/Basic_Server/build /Users/areay7/QtCode/HST_Code/Basic_Server/build /Users/areay7/QtCode/HST_Code/Basic_Server/build/CMakeFiles/Basic_Server.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Basic_Server.dir/depend

