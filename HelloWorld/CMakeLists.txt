
set(SOURCES HelloWorld.cpp)

add_executable(HelloWorld ${SOURCES})

target_link_libraries(HelloWorld project_warnings Message)

target_include_directories(HelloWorld PUBLIC "${PROJECT_BINARY_DIR}")

install(TARGETS HelloWorld DESTINATION bin)
