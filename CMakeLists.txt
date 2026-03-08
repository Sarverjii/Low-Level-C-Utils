cmake_minimum_required(VERSION 3.10)

project(LowLevelC C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_library(utils
    src/array_utils.c
    src/math_utils.c
    src/strings_utils.c
)

add_executable(array_test tests/array_main.c)
target_link_libraries(array_test utils)

add_executable(math_test tests/main_math.c)
target_link_libraries(math_test utils)

add_executable(strings_test tests/strings_main.c)
target_link_libraries(strings_test utils)