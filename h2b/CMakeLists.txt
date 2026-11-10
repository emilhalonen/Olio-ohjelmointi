cmake_minimum_required(VERSION 3.16)

project(h2b
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Qt6 6.8 REQUIRED COMPONENTS Core)

qt_standard_project_setup(REQUIRES 6.8)
qt_add_executable(h2b
    main.cpp
    car.h
    car.cpp
)

target_link_libraries(h2b PRIVATE Qt6::Core)