cmake_minimum_required(VERSION 3.16)

project(example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra -pedantic -Werror)

add_library(example-lib
    src/utils_math.cpp
)

add_executable(example
    src/main.cpp
)

target_include_directories(example PUBLIC src)
target_link_libraries(example PRIVATE example-lib)
