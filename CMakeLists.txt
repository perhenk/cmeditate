cmake_minimum_required(VERSION 3.23)
project(cmeditate, C)
add_subdirectory(src)
set_target_properties(cmeditate PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)
