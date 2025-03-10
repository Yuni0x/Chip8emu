# Add source files automatically
file(GLOB_RECURSE SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add sources to the target
target_sources(${EXECUTABLE_NAME} PRIVATE ${SRC_FILES})

# Include directories
target_include_directories(${EXECUTABLE_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})