add_executable(test-pass
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

add_test(NAME    test-pass
         COMMAND test-pass)
