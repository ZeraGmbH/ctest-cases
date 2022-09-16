add_executable(test-timeout
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

add_test(NAME    test-timeout
         COMMAND test-timeout)
