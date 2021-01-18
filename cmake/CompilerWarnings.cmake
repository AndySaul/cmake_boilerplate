
function(set_project_warnings project_name)

    if (MSVC)
        target_compile_options(${project_name} INTERFACE /W4 /WX)
    else ()
        target_compile_options(${project_name}
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
                -Wlogical-op
                -Wnull-dereference
                -Wuseless-cast
                -Wdouble-promotion
                -Wformat=2
                -Werror
                )
    endif ()

endfunction()