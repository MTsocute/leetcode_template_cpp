cmake_minimum_required(VERSION 3.30)
project(leetcode)

set(CMAKE_CXX_STANDARD 26)

# ? cmake -DCMAKE_EXPORT_COMPILE_COMMANDS
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# copy compile_commands.json to project_root/.vscode after build
add_custom_target(copy_compile_commands ALL
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/.vscode
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_BINARY_DIR}/compile_commands.json
        ${CMAKE_SOURCE_DIR}/.vscode/compile_commands.json
    DEPENDS ${CMAKE_BINARY_DIR}/compile_commands.json
    COMMENT "Copying compile_commands.json to .vscode directory"
)

find_package(fmt REQUIRED)

add_executable(leetcode main.cpp main.h)

target_link_libraries(leetcode PRIVATE fmt::fmt)
