
# Compile the static library
add_library(${PROJECT_NAME} STATIC math_ops.c)

# Include library header
target_include_directories(${PROJECT_NAME} PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/
)

# Specify -lm flag used by math.h, private because it is a library internal implementation
target_link_libraries(${PROJECT_NAME} PRIVATE m)

# Pass the version to the target libray as the compiler definition
add_definitions( -DVERSION="${PROJECT_VERSION}")