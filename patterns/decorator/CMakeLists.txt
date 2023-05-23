cmake_minimum_required(VERSION 3.18)

project(decorator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
file(GLOB_RECURSE PROJECT_SOURCES "src/*.cpp" "src/*.h")
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
