cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra -pedantic -Werror)

add_executable(example-lib-test
    example_lib_test.cpp
)

find_package(GTest REQUIRED)

target_link_libraries(example-lib-test PRIVATE  example-lib
                                                GTest::GTest
                                                GTest::Main)

gtest_discover_tests(example-lib-test)