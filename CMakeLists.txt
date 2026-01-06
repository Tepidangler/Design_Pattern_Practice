cmake_minimum_required(VERSION 4.0)
project(Practice)

set(CMAKE_CXX_STANDARD 23)

if(WIN32)
    set(COVERAGE_FLAGS "/std:c++latest /O2 /fsanitize=address")
elseif(UNIX)
    set(COVERAGE_FLAGS "-std=c++23 -O3 -fsanitize=address -fsanitize=undefined -Wall -Wconversion")
endif()

set(CMAKE_CXX_FLAGS "${COVERAGE_FLAGS}")

add_subdirectory(Singleton)
target_include_directories(
        Singleton PUBLIC
        "${PROJECT_SOURCE_DIR}"
)

add_subdirectory(Factory)
target_include_directories(
        Factory PUBLIC
        "${PROJECT_SOURCE_DIR}"
)