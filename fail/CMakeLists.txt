add_executable(test-fail
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

add_test(NAME    test-fail
         COMMAND test-fail)
