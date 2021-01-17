
add_executable(HelloWorld main.cpp)

target_link_libraries(HelloWorld project_warnings Message Widget)

target_include_directories(HelloWorld PUBLIC "${PROJECT_BINARY_DIR}")
set_property(TARGET HelloWorld PROPERTY CXX_STANDARD 20)

install(TARGETS HelloWorld DESTINATION bin)
