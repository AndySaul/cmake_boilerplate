# cmake_boilerplate
Hello World CMake project with GoogleTest support. A template for
cross-platform apps

This project was influenced by [lefticus/cpp_starter_project](https://github.com/lefticus/cpp_starter_project).
However, I wanted to build it myself from the ground up as a learning exercise

https://cmake.org/runningcmake/

https://cmake.org/cmake/help/latest/index.html

## Building with CLion

The easiest way to open with CLion is to explore to the checkout 
folder and select *Open Folder as CLion Project* from the context
menu

CLion will automatically generate configurations to build and run from
the CMakeLists.txt files

Note that CLion will generate different build folders for debug and 
release builds. The binaries will be generated in the
*cmake-build-xxx/bin* folder

## Building with Visual Studio

Recent versions of Visual Studio support CMake

https://devblogs.microsoft.com/cppblog/cmake-support-in-visual-studio/

CTest is aso integrated into Test Explorer

https://docs.microsoft.com/en-us/visualstudio/test/how-to-use-ctest-for-cpp?view=vs-2019

You can also use CMake GUI to create a Visual Studio project

Don't forget to select the correct generator. CMake GUI will default
to Win32 build, so you must specify x64 for a 64-bit binary

## Building from the command line

This method may be used for Linux builds

These commands also work for Windows command line, but some features 
such as *&&* may not be available

Use cmake command line to generate an *out-of-source build*

First, create a subdirectory for the build & cd into it 

```
mdkdir build_linux && cd build_linux
```

Generate the build

```
cmake ..
```

Run the build command to actually build the binaries

```
cmake --build .
```

Binaries can be build by directory. Dependencies are also built

```
cmake --build HelloWorld
```

The binaries will be generated in the *bin* subdir & can be executed
on Linux with

```
bin/HelloWorld
 ```

On Windows, you must specify the sub-directory for the build type:
```
.\bin\Debug\HelloWorld.exe
```

You can also run tests using the ctest command.

```
ctest
```

CTest does not build the tests. You can chain commands to build & run
tests:

```
cmake --build . && ctest
```

By default, the test output is not displayed when ctest is run. You
can use the *verbose* flag to show test results

```
ctest -V
```

You can also specify tests to display output on failure

```
CTEST_OUTPUT_ON_FAILURE=1 ctest
```

The easiest way to clean the project is to delete the entire build
directory

```
cd .. && rm -rf build_linux
```







