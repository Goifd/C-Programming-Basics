# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\hehexd\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\hehexd\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\untitled1.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\untitled1.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\untitled1.dir\flags.make

CMakeFiles\untitled1.dir\main.c.obj: CMakeFiles\untitled1.dir\flags.make
CMakeFiles\untitled1.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/untitled1.dir/main.c.obj"
	C:\PROGRA~2\MICROS~2\2019\Community\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\untitled1.dir\main.c.obj /FdCMakeFiles\untitled1.dir\ /FS -c "C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam\main.c"
<<

CMakeFiles\untitled1.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/main.c.i"
	C:\PROGRA~2\MICROS~2\2019\Community\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\cl.exe > CMakeFiles\untitled1.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam\main.c"
<<

CMakeFiles\untitled1.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/main.c.s"
	C:\PROGRA~2\MICROS~2\2019\Community\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\untitled1.dir\main.c.s /c "C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam\main.c"
<<

# Object files for target untitled1
untitled1_OBJECTS = \
"CMakeFiles\untitled1.dir\main.c.obj"

# External object files for target untitled1
untitled1_EXTERNAL_OBJECTS =

untitled1.exe: CMakeFiles\untitled1.dir\main.c.obj
untitled1.exe: CMakeFiles\untitled1.dir\build.make
untitled1.exe: CMakeFiles\untitled1.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable untitled1.exe"
	C:\Users\hehexd\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\untitled1.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\10.0.18362.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\10.0.18362.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\Community\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\untitled1.dir\objects1.rsp @<<
 /out:untitled1.exe /implib:untitled1.lib /pdb:"C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam\cmake-build-debug\untitled1.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\untitled1.dir\build: untitled1.exe

.PHONY : CMakeFiles\untitled1.dir\build

CMakeFiles\untitled1.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\untitled1.dir\cmake_clean.cmake
.PHONY : CMakeFiles\untitled1.dir\clean

CMakeFiles\untitled1.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam" "C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam" "C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam\cmake-build-debug" "C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam\cmake-build-debug" "C:\Users\hehexd\Desktop\Drive\UoM\Programozas Alapjai\Revesz_Janos_Eszam\cmake-build-debug\CMakeFiles\untitled1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\untitled1.dir\depend

