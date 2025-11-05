cmake_minimum_required(VERSION 4.0)
project(leetcode)

set(CMAKE_CXX_STANDARD 26)

# ? cmake -DCMAKE_EXPORT_COMPILE_COMMANDS
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# copy to project_root/.vscode
execute_process(
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_BINARY_DIR}/compile_commands.json
        ${CMAKE_SOURCE_DIR}/.vscode/compile_commands.json
)


find_package(fmt REQUIRED)

add_executable(leetcode main.cpp main.h)

target_link_libraries(leetcode PRIVATE fmt::fmt)
