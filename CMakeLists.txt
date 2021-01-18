cmake_minimum_required(VERSION 3.10)

set(CMAKE_INSTALL_PREFIX outputs)
set_property(GLOBAL PROPERTY USE_FOLDERS On)

project(AndySaul VERSION 1.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

add_library(project_warnings INTERFACE)

include(cmake/CompilerWarnings.cmake)
set_project_warnings(project_warnings)

include(FetchContent)

FetchContent_Declare(
        Corrosion
        GIT_REPOSITORY https://github.com/AndrewGaspar/corrosion.git
        GIT_TAG origin/master # Optionally specify a version tag or branch here
)

FetchContent_MakeAvailable(Corrosion)

configure_file(Version.in Version.h)
install(FILES "${PROJECT_BINARY_DIR}/Config.h" DESTINATION include)

enable_testing()

corrosion_import_crate(MANIFEST_PATH rust-lib/Cargo.toml)

add_subdirectory(HelloWorld)
add_subdirectory(Message)
add_subdirectory(Widget)

add_subdirectory(external)
