cmake_minimum_required(VERSION 2.8.9)

project(QxPSimpl)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
# Use C++11
set(CMAKE_CXX_FLAGS "-std=c++0x")

# Find the Qt library
# find_package(Qt5 COMPONENTS Core Gui)
find_package(Qt5Gui)

# Tell CMake to create the helloworld executable
add_library(QxPSimpl src/qxpsimpl.cpp)

# Use the Widgets module from Qt 5.
qt5_use_modules(QxPSimpl Gui)
