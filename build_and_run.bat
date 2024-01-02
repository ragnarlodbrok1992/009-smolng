@echo off
SET compiler_dir="C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Tools\MSVC\14.31.31103\bin\Hostx64\x64\cl.exe"
SET GLAD_INCLUDE="D:\libraries\glad\include"
SET GLFW_INCLUDE="D:\libraries\glfw-3.3.8\include"
SET GLFW_LIB="D:\libraries\glfw-3.3.8\build\x64\lib\glfw3_mt.lib"

echo Building...

echo Creating build folder...
if not exist "build" mkdir build

%compiler_dir% /EHsc /Zi^
  /Fe:"build\main.exe"^
  src\main.cpp^
  /I%GLAD_INCLUDE%^
  /I%GLFW_INCLUDE%^
  /Fo:"build\main.obj"^
  /Fd:"build\main.pdb"^
  /link %GLFW_LIB% OpenGL32.lib Gdi32.lib User32.lib Shell32.lib

echo "Done building!"

echo Running...

.\build\main.exe

