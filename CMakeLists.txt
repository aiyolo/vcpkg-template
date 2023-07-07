cmake_minimum_required(VERSION 3.17)

project(template LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(C:/Users/zhu/vcpkg/scripts/buildsystems/vcpkg.cmake)

find_package(fmt CONFIG REQUIRED)
find_package(ZLIB REQUIRED)

add_executable(template
  main.cpp
)

target_link_libraries(template PRIVATE fmt::fmt fmt::fmt-header-only ZLIB::ZLIB)
