cmake_minimum_required(VERSION 3.30)
project(remote-dm VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_TOOLCHAIN_FILE /usr/local/Qt-6.8.0/lib/cmake/Qt6/qt.toolchain.cmake)
set(CMAKE_PREFIX_PATH /usr/local/Qt-6.8.0/)
set(CMAKE_EXPORT_COMPILE_COMMANDS   ON)
set(CMAKE_CXX_STANDARD              20)
set(CMAKE_CXX_STANDARD_REQUIRED    YES)
#set(CMAKE_CXX_EXTENSIONS           OFF)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

qt_add_executable(remote-dm-server src/server/main.cpp)

target_link_libraries(remote-dm-server PRIVATE Qt6::Widgets)
