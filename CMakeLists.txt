cmake_minimum_required(VERSION 3.16)

add_subdirectory(cmake_tools)
ensure_vcpkg()

project(qt5-cmake)

find_package(Qt5 CONFIG REQUIRED COMPONENTS Core Widgets)

add_executable(qt5-cmake src/main.cc src/mainwindow.cc)
target_link_libraries(qt5-cmake PRIVATE Qt5::Core Qt5::Widgets)