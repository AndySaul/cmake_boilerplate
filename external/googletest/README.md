#GoogleTest


I could have used this technique:
```cmake
find_package(GTest CONFIG REQUIRED)
...
target_link_libraries(Message_tests GTest::main GTest::gmock project_warnings Message)
```

I chose the current method because of this advice in the
[googltest docs](https://github.com/google/googletest/tree/master/googletest#incorporating-into-an-existing-cmake-project):

*And a more robust and flexible approach is to build GoogleTest as part of
that project directly. This is done by making the GoogleTest source code
available to the main build and adding it using CMake's add_subdirectory()
command. This has the significant advantage that the same compiler and 
linker settings are used between GoogleTest and the rest of your project, 
so issues associated with using incompatible libraries (eg debug/release),
etc. are avoided. This is particularly useful on Windows.*