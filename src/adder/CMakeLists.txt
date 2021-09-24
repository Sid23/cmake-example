# Compile private library as static using the name defined into target libray
add_library(${PRIV_LIB} adder.c)

# Include library header
target_include_directories(${PRIV_LIB} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
