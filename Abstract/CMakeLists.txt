cmake_minimum_required(VERSION 4.0)
project(Abstract)

set(CMAKE_CXX_STANDARD 23)

find_package(fmt)

add_executable(Abstract main.cpp
        Chair.cpp
        Chair.h
        ModernChair.cpp
        ModernChair.h
        VictorianChair.cpp
        VictorianChair.h
        Couch.cpp
        Couch.h
        ModernCouch.cpp
        ModernCouch.h
        VictorianCouch.cpp
        VictorianCouch.h
        CoffeeTable.cpp
        CoffeeTable.h
        ModernCoffeeTable.cpp
        ModernCoffeeTable.h
        VictorianCoffeeTable.cpp
        VictorianCoffeeTable.h
        FurnitureFactory.cpp
        FurnitureFactory.h
        ModernFurnitureFactory.cpp
        ModernFurnitureFactory.h
        VictorianFurnitureFactory.cpp
        VictorianFurnitureFactory.h
)

target_link_libraries(Abstract
        fmt::fmt
)