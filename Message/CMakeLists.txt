
add_library(Message Message.h Message.cpp)

target_include_directories(Message INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Message project_warnings)
set_property(TARGET Message PROPERTY CXX_STANDARD 20)

add_executable(Message_tests Message_tests.cpp)
target_link_libraries(Message_tests gtest_main gmock project_warnings Message)
add_test(NAME Message COMMAND Message_tests)
