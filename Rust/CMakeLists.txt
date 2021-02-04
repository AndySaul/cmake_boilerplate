include(FetchContent)
FetchContent_Declare(
  Corrosion
  GIT_REPOSITORY https://github.com/AndrewGaspar/corrosion.git
  origin/master)

add_subdirectory(hello_from_rust)
