cmake_minimum_required(VERSION 4.0)
project(Prototype)

set(CMAKE_CXX_STANDARD 23)

find_package(fmt)

add_executable(Prototype main.cpp
        Prototype.cpp
        Prototype.h
        PrototypeFactory.cpp
        PrototypeFactory.h

)

target_link_libraries(Prototype
        fmt::fmt
)