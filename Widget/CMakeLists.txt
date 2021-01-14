
set(HEADER_FILES Widget.h Gadget.h)
set(SOURCES Widget.cpp Gadget.cpp)

add_library(Widget ${SOURCES} ${HEADER_FILES})

target_include_directories(Widget INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Widget project_warnings)

add_executable(Widget_tests Widget_tests.cpp Gadget_tests.cpp)
target_link_libraries(Widget_tests gtest_main gmock project_warnings Widget)
add_test(NAME Widget COMMAND Widget_tests)