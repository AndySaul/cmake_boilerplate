if(CORROSION_INSTALLED)
  find_package(Corrosion REQUIRED)
else()
  FetchContent_MakeAvailable(Corrosion)
endif()
corrosion_import_crate(MANIFEST_PATH Cargo.toml)

# Corrosion doesn't support CTest yet This block assumes cargo is in the path
add_test(
  NAME hello_from_rust_test
  COMMAND cargo test
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
