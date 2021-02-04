include(FetchContent)
FetchContent_Declare(
        Corrosion
        GIT_REPOSITORY https://github.com/AndrewGaspar/corrosion.git
        GIT_TAG origin/master
)

add_subdirectory(rust-lib)