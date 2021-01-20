add_library(Message Message.h Message.cpp)

target_include_directories(Message INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Message PRIVATE project_warnings)

add_executable(Message_tests Message_tests.cpp)
target_link_libraries(Message_tests PRIVATE gtest_main gmock project_warnings Message)
add_test(NAME Message COMMAND Message_tests)
