# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_SOURCE_DIR = C:\Engine\JadeX

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Engine\JadeX

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	"C:\Program Files\CMake\bin\cmake-gui.exe" -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"C:\Program Files\CMake\bin\cmake.exe" --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Engine\JadeX\CMakeFiles C:\Engine\JadeX\\CMakeFiles\progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Engine\JadeX\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named JadeX

# Build rule for target.
JadeX: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 JadeX
.PHONY : JadeX

# fast build rule for target.
JadeX/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/build
.PHONY : JadeX/fast

Source/JadeX/Logger.obj: Source/JadeX/Logger.c.obj
.PHONY : Source/JadeX/Logger.obj

# target to build an object file
Source/JadeX/Logger.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Logger.c.obj
.PHONY : Source/JadeX/Logger.c.obj

Source/JadeX/Logger.i: Source/JadeX/Logger.c.i
.PHONY : Source/JadeX/Logger.i

# target to preprocess a source file
Source/JadeX/Logger.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Logger.c.i
.PHONY : Source/JadeX/Logger.c.i

Source/JadeX/Logger.s: Source/JadeX/Logger.c.s
.PHONY : Source/JadeX/Logger.s

# target to generate assembly for a file
Source/JadeX/Logger.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Logger.c.s
.PHONY : Source/JadeX/Logger.c.s

Source/JadeX/Platform/Windows/WindowsFileSystem.obj: Source/JadeX/Platform/Windows/WindowsFileSystem.c.obj
.PHONY : Source/JadeX/Platform/Windows/WindowsFileSystem.obj

# target to build an object file
Source/JadeX/Platform/Windows/WindowsFileSystem.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Platform/Windows/WindowsFileSystem.c.obj
.PHONY : Source/JadeX/Platform/Windows/WindowsFileSystem.c.obj

Source/JadeX/Platform/Windows/WindowsFileSystem.i: Source/JadeX/Platform/Windows/WindowsFileSystem.c.i
.PHONY : Source/JadeX/Platform/Windows/WindowsFileSystem.i

# target to preprocess a source file
Source/JadeX/Platform/Windows/WindowsFileSystem.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Platform/Windows/WindowsFileSystem.c.i
.PHONY : Source/JadeX/Platform/Windows/WindowsFileSystem.c.i

Source/JadeX/Platform/Windows/WindowsFileSystem.s: Source/JadeX/Platform/Windows/WindowsFileSystem.c.s
.PHONY : Source/JadeX/Platform/Windows/WindowsFileSystem.s

# target to generate assembly for a file
Source/JadeX/Platform/Windows/WindowsFileSystem.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Platform/Windows/WindowsFileSystem.c.s
.PHONY : Source/JadeX/Platform/Windows/WindowsFileSystem.c.s

Source/JadeX/Platform/Windows/WindowsMemory.obj: Source/JadeX/Platform/Windows/WindowsMemory.c.obj
.PHONY : Source/JadeX/Platform/Windows/WindowsMemory.obj

# target to build an object file
Source/JadeX/Platform/Windows/WindowsMemory.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Platform/Windows/WindowsMemory.c.obj
.PHONY : Source/JadeX/Platform/Windows/WindowsMemory.c.obj

Source/JadeX/Platform/Windows/WindowsMemory.i: Source/JadeX/Platform/Windows/WindowsMemory.c.i
.PHONY : Source/JadeX/Platform/Windows/WindowsMemory.i

# target to preprocess a source file
Source/JadeX/Platform/Windows/WindowsMemory.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Platform/Windows/WindowsMemory.c.i
.PHONY : Source/JadeX/Platform/Windows/WindowsMemory.c.i

Source/JadeX/Platform/Windows/WindowsMemory.s: Source/JadeX/Platform/Windows/WindowsMemory.c.s
.PHONY : Source/JadeX/Platform/Windows/WindowsMemory.s

# target to generate assembly for a file
Source/JadeX/Platform/Windows/WindowsMemory.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Platform/Windows/WindowsMemory.c.s
.PHONY : Source/JadeX/Platform/Windows/WindowsMemory.c.s

Source/JadeX/Platform/Windows/WindowsThread.obj: Source/JadeX/Platform/Windows/WindowsThread.c.obj
.PHONY : Source/JadeX/Platform/Windows/WindowsThread.obj

# target to build an object file
Source/JadeX/Platform/Windows/WindowsThread.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Platform/Windows/WindowsThread.c.obj
.PHONY : Source/JadeX/Platform/Windows/WindowsThread.c.obj

Source/JadeX/Platform/Windows/WindowsThread.i: Source/JadeX/Platform/Windows/WindowsThread.c.i
.PHONY : Source/JadeX/Platform/Windows/WindowsThread.i

# target to preprocess a source file
Source/JadeX/Platform/Windows/WindowsThread.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Platform/Windows/WindowsThread.c.i
.PHONY : Source/JadeX/Platform/Windows/WindowsThread.c.i

Source/JadeX/Platform/Windows/WindowsThread.s: Source/JadeX/Platform/Windows/WindowsThread.c.s
.PHONY : Source/JadeX/Platform/Windows/WindowsThread.s

# target to generate assembly for a file
Source/JadeX/Platform/Windows/WindowsThread.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Platform/Windows/WindowsThread.c.s
.PHONY : Source/JadeX/Platform/Windows/WindowsThread.c.s

Source/JadeX/Platform/Windows/WindowsWindow.obj: Source/JadeX/Platform/Windows/WindowsWindow.c.obj
.PHONY : Source/JadeX/Platform/Windows/WindowsWindow.obj

# target to build an object file
Source/JadeX/Platform/Windows/WindowsWindow.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Platform/Windows/WindowsWindow.c.obj
.PHONY : Source/JadeX/Platform/Windows/WindowsWindow.c.obj

Source/JadeX/Platform/Windows/WindowsWindow.i: Source/JadeX/Platform/Windows/WindowsWindow.c.i
.PHONY : Source/JadeX/Platform/Windows/WindowsWindow.i

# target to preprocess a source file
Source/JadeX/Platform/Windows/WindowsWindow.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Platform/Windows/WindowsWindow.c.i
.PHONY : Source/JadeX/Platform/Windows/WindowsWindow.c.i

Source/JadeX/Platform/Windows/WindowsWindow.s: Source/JadeX/Platform/Windows/WindowsWindow.c.s
.PHONY : Source/JadeX/Platform/Windows/WindowsWindow.s

# target to generate assembly for a file
Source/JadeX/Platform/Windows/WindowsWindow.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/JadeX/Platform/Windows/WindowsWindow.c.s
.PHONY : Source/JadeX/Platform/Windows/WindowsWindow.c.s

Source/Main.obj: Source/Main.c.obj
.PHONY : Source/Main.obj

# target to build an object file
Source/Main.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/Main.c.obj
.PHONY : Source/Main.c.obj

Source/Main.i: Source/Main.c.i
.PHONY : Source/Main.i

# target to preprocess a source file
Source/Main.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/Main.c.i
.PHONY : Source/Main.c.i

Source/Main.s: Source/Main.c.s
.PHONY : Source/Main.s

# target to generate assembly for a file
Source/Main.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\JadeX.dir\build.make CMakeFiles/JadeX.dir/Source/Main.c.s
.PHONY : Source/Main.c.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... JadeX
	@echo ... Source/JadeX/Logger.obj
	@echo ... Source/JadeX/Logger.i
	@echo ... Source/JadeX/Logger.s
	@echo ... Source/JadeX/Platform/Windows/WindowsFileSystem.obj
	@echo ... Source/JadeX/Platform/Windows/WindowsFileSystem.i
	@echo ... Source/JadeX/Platform/Windows/WindowsFileSystem.s
	@echo ... Source/JadeX/Platform/Windows/WindowsMemory.obj
	@echo ... Source/JadeX/Platform/Windows/WindowsMemory.i
	@echo ... Source/JadeX/Platform/Windows/WindowsMemory.s
	@echo ... Source/JadeX/Platform/Windows/WindowsThread.obj
	@echo ... Source/JadeX/Platform/Windows/WindowsThread.i
	@echo ... Source/JadeX/Platform/Windows/WindowsThread.s
	@echo ... Source/JadeX/Platform/Windows/WindowsWindow.obj
	@echo ... Source/JadeX/Platform/Windows/WindowsWindow.i
	@echo ... Source/JadeX/Platform/Windows/WindowsWindow.s
	@echo ... Source/Main.obj
	@echo ... Source/Main.i
	@echo ... Source/Main.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system

