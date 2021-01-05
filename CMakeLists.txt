cmake_minimum_required(VERSION 3.10)

set(CMAKE_INSTALL_PREFIX outputs)
set_property(GLOBAL PROPERTY USE_FOLDERS On)

project(All VERSION 1.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(project_warnings INTERFACE)

if(MSVC)
  target_compile_options(project_warnings INTERFACE /W4 /WX)
else()
  target_compile_options(project_warnings
                         INTERFACE
                         -Wall
                         -Wextra
                         -Wshadow
                         -Wnon-virtual-dtor
                         -Wold-style-cast
                         -Wcast-align
                         -Wunused
                         -Woverloaded-virtual
                         -Wpedantic
                         -Wconversion
                         -Wsign-conversion
                         -Wmisleading-indentation
                         -Wduplicated-cond
                         -Wduplicated-branches
                         -Wlogical-op
                         -Wnull-dereference
                         -Wuseless-cast
                         -Wdouble-promotion
                         -Wformat=2
                         )
endif()

configure_file(Version.in Version.h)
install(FILES "${PROJECT_BINARY_DIR}/Config.h" DESTINATION include)

enable_testing()

add_subdirectory(HelloWorld)
add_subdirectory(Message)

add_subdirectory(external)
