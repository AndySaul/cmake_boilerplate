# cmake_boilerplate
Hello World CMake project with GoogleTest support. A template for cross-platform apps

https://cmake.org/runningcmake/

## Generating a Windows build

You can use CMake GUI to create a Visual Studio project

Don't forget to select the correct generator. CMake GUI will default to Win32 build, so you must specify x64 for a 64-bit binary

## Building for linux

Use cmake command line to generate an out-of-source build

First, create a subdirectory for the build & cd into it 

`mdkdir build_linux && cd build_linux`

Generate the build

`cmake ..`

Run the build command to actually build the binaries

`cmake --build .`

Binaries can be build by directory. Dependencies are also built

`cmake --build HelloWorld`

The binaries will be generated in the *bin* subdir & can be executed with 

`bin/HelloWorld` or `bin/Message_tests`

You can also run tests using the ctest command.

`ctest`

CTest does not build the tests. You can chain commands to build & run tests:
 
`cmake --build . && ctest`

By default, the test output is not displayed when ctest is run. You can use the *verbose* flag to show test results

`ctest -V`

You can also specify tests to display output on failure

`CTEST_OUTPUT_ON_FAILURE=1 ctest`

The easiest way to clean the project is to delete the entire build directory

`cd .. && rm -rf build_linux`







