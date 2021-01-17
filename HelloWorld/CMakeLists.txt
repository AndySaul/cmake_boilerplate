
add_executable(HelloWorld main.cpp)

target_link_libraries(HelloWorld project_warnings Message Widget)

target_include_directories(HelloWorld PUBLIC "${PROJECT_BINARY_DIR}")

install(TARGETS HelloWorld DESTINATION bin)
