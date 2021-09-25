find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} PRIVATE)

# Create the test executable
add_executable(MathOps_Tests main.cpp math_ops.cpp)
# Link executable with the target library in order to test it
# Also use pthread and gtest library
target_link_libraries(MathOps_Tests ${PROJECT_NAME} ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)

# Adde tests to the make target and run them
gtest_discover_tests(MathOps_Tests)