cmake_minimum_required(VERSION 3.10)
project(sandaGJ)

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_STANDARD 17)


include_directories(/home/juangdev/raylib/src)
link_directories(/home/juangdev/raylib/build)

add_executable(sandaGJ main.cpp gameCore.cpp)

target_link_libraries(sandaGJ raylib)


add_custom_target(run
    COMMAND sandaGJ
    DEPENDS sandaGJ
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)