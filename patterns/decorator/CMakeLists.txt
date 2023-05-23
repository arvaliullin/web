cmake_minimum_required(VERSION 3.18)

project(decorator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
  ${PROJECT_NAME}
  main.cpp
  VisualComponent.cpp
  VisualComponent.h
  Decorator.cpp
  Decorator.h
  Text.h
  Text.cpp
  BoldDecorator.h
  BoldDecorator.cpp
  CursiveDecorator.h
  CursiveDecorator.cpp)
