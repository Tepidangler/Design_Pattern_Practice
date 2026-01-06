cmake_minimum_required(VERSION 4.0)
project(Singleton)

set(CMAKE_CXX_STANDARD 23)

find_package(fmt)

add_executable(Singleton main.cpp
        Singleton.cpp
        Singleton.h
)

target_link_libraries(Singleton
    fmt::fmt
)