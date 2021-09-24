cmake_minimum_required(VERSION 3.18)

# Set the project name, language and version
project(math_ops LANGUAGES C VERSION 1.0.0)

# Add library sources
ADD_SUBDIRECTORY(src)

# Set binary output name for the testing program
set(BINARY_OUTPUT out)
message(STATUS "BINARY_OUTPUT: ${BINARY_OUTPUT}")

# Create test executable
add_executable(${BINARY_OUTPUT} main.c)

# Specify the link to the target library
target_link_libraries(${BINARY_OUTPUT} PRIVATE ${PROJECT_NAME})

