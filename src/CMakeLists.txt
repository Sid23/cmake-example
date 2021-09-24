# Compile the static library
add_library(${PROJECT_NAME} STATIC math_ops.c)

# Define and add private library
set(PRIV_LIB adder)
ADD_SUBDIRECTORY(${PRIV_LIB})

# Include library header needed to use the library
target_include_directories(${PROJECT_NAME} PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Include private library headers, used only in the target library implementation
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/${PRIV_LIB}/include
)

# Specify -lm flag used by math.h, private because it is a library internal implementation
# and the linking whit the private library used into its implementation
target_link_libraries(${PROJECT_NAME} PRIVATE 
    ${PRIV_LIB}
    m
)

# Pass the version to the target libray as the compiler definition
add_definitions( -DVERSION="${PROJECT_VERSION}")