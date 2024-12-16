cmake_minimum_required(VERSION 3.20)

project(JsonModel VERSION 0.1 LANGUAGES CXX)

option(JsonModel_BUILD_QML_MODULE "Build QML module" ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(QT_QML_OUTPUT_DIRECTORY  ${CMAKE_BINARY_DIR})

find_package(Qt6 6.2 COMPONENTS Qml REQUIRED)

qt_standard_project_setup()
qt_policy(SET QTP0001 NEW)

add_subdirectory(src)
