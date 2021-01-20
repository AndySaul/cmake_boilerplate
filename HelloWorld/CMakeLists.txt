add_executable(HelloWorld main.cpp)

target_link_libraries(HelloWorld PRIVATE project_warnings Message Widget rust_example)

# Include path for version.h
target_include_directories(HelloWorld PRIVATE "${PROJECT_BINARY_DIR}")

install(TARGETS HelloWorld DESTINATION bin)
