
set(HEADER_FILES Message.h)
set(SOURCES Message.cpp)

add_library(Message ${SOURCES} ${HEADER_FILES})

target_include_directories(Message INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Message project_warnings)

add_executable(Message_tests Message_tests.cpp)
target_link_libraries(Message_tests gtest_main project_warnings Message)
add_test(NAME Message COMMAND Message_tests)