cmake_minimum_required(VERSION 3.10)
project(CG_2018_WaveSimulation)

set(CMAKE_CXX_STANDARD 11)

set (CMAKE_PREFIX_PATH "C:\\Qt\\5.5\\mingw492_32")

include_directories(.)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)

# Tell CMake to create the helloworld executable
add_executable(CG_2018_WaveSimulation
        main.cpp
        mainwindow.cpp
        mainwindow.h)

# Use the Widgets module from Qt 5.
target_link_libraries(CG_2018_WaveSimulation Qt5::Widgets)



