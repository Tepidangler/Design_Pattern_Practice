cmake_minimum_required(VERSION 4.0)
project(Builder)

set(CMAKE_CXX_STANDARD 23)

find_package(fmt)

add_executable(Builder main.cpp
        Director.cpp
        Director.h
        Builder.cpp
        Builder.h
        Building.cpp
        Building.h
)

target_link_libraries(Builder
        fmt::fmt
)