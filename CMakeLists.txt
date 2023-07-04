cmake_minimum_required(VERSION 3.17)

project(template LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

include(C:/Users/zhu/vcpkg/scripts/buildsystems/vcpkg.cmake)
add_executable(template
  main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
)

target_link_libraries(template PRIVATE Qt5::Widgets)
