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
CMAKE_SOURCE_DIR = /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/build

# Include any dependencies generated for this target.
include CMakeFiles/Basic_Client.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Basic_Client.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Basic_Client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Basic_Client.dir/flags.make

CMakeFiles/Basic_Client.dir/codegen:
.PHONY : CMakeFiles/Basic_Client.dir/codegen

CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.o: CMakeFiles/Basic_Client.dir/flags.make
CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.o: /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/module/Ice/Custom.cpp
CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.o: CMakeFiles/Basic_Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.o -MF CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.o.d -o CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.o -c /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/module/Ice/Custom.cpp

CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/module/Ice/Custom.cpp > CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.i

CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/module/Ice/Custom.cpp -o CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.s

CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.o: CMakeFiles/Basic_Client.dir/flags.make
CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.o: /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/module/Protobuf/message.pb.cc
CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.o: CMakeFiles/Basic_Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.o -MF CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.o.d -o CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.o -c /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/module/Protobuf/message.pb.cc

CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/module/Protobuf/message.pb.cc > CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.i

CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/module/Protobuf/message.pb.cc -o CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.s

CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.o: CMakeFiles/Basic_Client.dir/flags.make
CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.o: /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/RabbitMQClient.cpp
CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.o: CMakeFiles/Basic_Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.o -MF CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.o.d -o CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.o -c /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/RabbitMQClient.cpp

CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/RabbitMQClient.cpp > CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.i

CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/RabbitMQClient.cpp -o CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.s

CMakeFiles/Basic_Client.dir/src/IceClient.cpp.o: CMakeFiles/Basic_Client.dir/flags.make
CMakeFiles/Basic_Client.dir/src/IceClient.cpp.o: /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/IceClient.cpp
CMakeFiles/Basic_Client.dir/src/IceClient.cpp.o: CMakeFiles/Basic_Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Basic_Client.dir/src/IceClient.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Basic_Client.dir/src/IceClient.cpp.o -MF CMakeFiles/Basic_Client.dir/src/IceClient.cpp.o.d -o CMakeFiles/Basic_Client.dir/src/IceClient.cpp.o -c /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/IceClient.cpp

CMakeFiles/Basic_Client.dir/src/IceClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Basic_Client.dir/src/IceClient.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/IceClient.cpp > CMakeFiles/Basic_Client.dir/src/IceClient.cpp.i

CMakeFiles/Basic_Client.dir/src/IceClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Basic_Client.dir/src/IceClient.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/IceClient.cpp -o CMakeFiles/Basic_Client.dir/src/IceClient.cpp.s

CMakeFiles/Basic_Client.dir/src/Runner.cpp.o: CMakeFiles/Basic_Client.dir/flags.make
CMakeFiles/Basic_Client.dir/src/Runner.cpp.o: /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/Runner.cpp
CMakeFiles/Basic_Client.dir/src/Runner.cpp.o: CMakeFiles/Basic_Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Basic_Client.dir/src/Runner.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Basic_Client.dir/src/Runner.cpp.o -MF CMakeFiles/Basic_Client.dir/src/Runner.cpp.o.d -o CMakeFiles/Basic_Client.dir/src/Runner.cpp.o -c /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/Runner.cpp

CMakeFiles/Basic_Client.dir/src/Runner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Basic_Client.dir/src/Runner.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/Runner.cpp > CMakeFiles/Basic_Client.dir/src/Runner.cpp.i

CMakeFiles/Basic_Client.dir/src/Runner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Basic_Client.dir/src/Runner.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/Runner.cpp -o CMakeFiles/Basic_Client.dir/src/Runner.cpp.s

CMakeFiles/Basic_Client.dir/src/main.cpp.o: CMakeFiles/Basic_Client.dir/flags.make
CMakeFiles/Basic_Client.dir/src/main.cpp.o: /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/main.cpp
CMakeFiles/Basic_Client.dir/src/main.cpp.o: CMakeFiles/Basic_Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Basic_Client.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Basic_Client.dir/src/main.cpp.o -MF CMakeFiles/Basic_Client.dir/src/main.cpp.o.d -o CMakeFiles/Basic_Client.dir/src/main.cpp.o -c /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/main.cpp

CMakeFiles/Basic_Client.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Basic_Client.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/main.cpp > CMakeFiles/Basic_Client.dir/src/main.cpp.i

CMakeFiles/Basic_Client.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Basic_Client.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/src/main.cpp -o CMakeFiles/Basic_Client.dir/src/main.cpp.s

# Object files for target Basic_Client
Basic_Client_OBJECTS = \
"CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.o" \
"CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.o" \
"CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.o" \
"CMakeFiles/Basic_Client.dir/src/IceClient.cpp.o" \
"CMakeFiles/Basic_Client.dir/src/Runner.cpp.o" \
"CMakeFiles/Basic_Client.dir/src/main.cpp.o"

# External object files for target Basic_Client
Basic_Client_EXTERNAL_OBJECTS =

/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/bin/Basic_Client: CMakeFiles/Basic_Client.dir/module/Ice/Custom.cpp.o
/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/bin/Basic_Client: CMakeFiles/Basic_Client.dir/module/Protobuf/message.pb.cc.o
/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/bin/Basic_Client: CMakeFiles/Basic_Client.dir/src/RabbitMQClient.cpp.o
/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/bin/Basic_Client: CMakeFiles/Basic_Client.dir/src/IceClient.cpp.o
/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/bin/Basic_Client: CMakeFiles/Basic_Client.dir/src/Runner.cpp.o
/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/bin/Basic_Client: CMakeFiles/Basic_Client.dir/src/main.cpp.o
/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/bin/Basic_Client: CMakeFiles/Basic_Client.dir/build.make
/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/bin/Basic_Client: CMakeFiles/Basic_Client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/bin/Basic_Client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Basic_Client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Basic_Client.dir/build: /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/bin/Basic_Client
.PHONY : CMakeFiles/Basic_Client.dir/build

CMakeFiles/Basic_Client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Basic_Client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Basic_Client.dir/clean

CMakeFiles/Basic_Client.dir/depend:
	cd /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/build /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/build /Users/areay7/QtCode/HST_Code/Basic_GoogleTest_Client/build/CMakeFiles/Basic_Client.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Basic_Client.dir/depend

