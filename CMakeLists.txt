cmake_minimum_required(VERSION 3.1)

project(ctest-cases
    LANGUAGES CXX
    VERSION 1.0.0
)

option(TEST_FAIL "Build and run failing test" ON)
option(TEST_TIMEOUT "Build and run timeout test" ON)
option(TEST_PASS "Build and run pass test" ON)

enable_testing()

if(TEST_FAIL)
    add_subdirectory(fail)
endif()

if(TEST_TIMEOUT)
    add_subdirectory(timeout)
endif()

if(TEST_PASS)
    add_subdirectory(pass)
endif()
