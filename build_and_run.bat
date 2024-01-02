@echo off
SET compiler_dir="C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Tools\MSVC\14.31.31103\bin\Hostx64\x64\cl.exe"

echo Building...

echo Creating build folder...
if not exist "build" mkdir build

%compiler_dir% /Ehsc /Zi^
  /Fe:"build\main.exe"^
  src\main.cpp^
  /Fo:"build\main.obj"^
  /Fd:"build\main.pdb"

echo Done building!

echo Running...

build\main.exe

