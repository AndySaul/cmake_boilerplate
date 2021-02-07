option(CORROSION_INSTALLED "Set on if Corrosion is installed locally" ON)
if (CORROSION_INSTALLED)
  find_package(Corrosion REQUIRED)
else()
  include(FetchContent)
  FetchContent_Declare(
    Corrosion
    GIT_REPOSITORY https://github.com/AndrewGaspar/corrosion.git
    origin/master)
endif()

add_subdirectory(hello_from_rust)
