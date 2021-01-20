add_library(Widget Widget.h Widget.cpp Gadget.h Gadget.cpp)

target_include_directories(Widget INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Widget PRIVATE project_warnings)

add_executable(Widget_tests Widget_tests.cpp Gadget_tests.cpp)
target_link_libraries(Widget_tests PRIVATE gtest_main gmock project_warnings Widget)
add_test(NAME Widget COMMAND Widget_tests)
