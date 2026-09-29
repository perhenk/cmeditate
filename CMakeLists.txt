cmake_minimum_required(VERSION 3.23)
project(cMindful, C)
add_subdirectory(src)
set_target_properties(cmindful PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)
