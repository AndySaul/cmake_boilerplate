cmake_minimum_required(VERSION 3.10)

set(CMAKE_INSTALL_PREFIX outputs)
set_property(GLOBAL PROPERTY USE_FOLDERS On)

project(AndySaul VERSION 1.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(project_warnings INTERFACE)

include(cmake/CompilerWarnings.cmake)
set_project_warnings(project_warnings)

configure_file(Version.in Version.h)
install(FILES "${PROJECT_BINARY_DIR}/Config.h" DESTINATION include)

enable_testing()

add_subdirectory(HelloWorld)
add_subdirectory(Message)
add_subdirectory(Widget)

add_subdirectory(Rust)

add_subdirectory(external)
