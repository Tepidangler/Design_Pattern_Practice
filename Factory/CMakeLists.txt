cmake_minimum_required(VERSION 4.0)
project(Factory)

set(CMAKE_CXX_STANDARD 23)

find_package(fmt)

add_executable(Factory main.cpp
        Transport.h
        Truck.h
        Ship.h
        Logistics.h
        RoadLogistics.h
        SeaLogistics.h
)

target_link_libraries(Factory
        fmt::fmt
)