cmake_policy(SET CMP0048 NEW)
project(get_image VERSION "0.1.0")
cmake_minimum_required(VERSION 3.16)

find_package(OpenCV)

# Additional Linker flags for pylon
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -O3")
set(CMAKE_BUILD_TYPE "Release")

set(sources get_image.cpp)
set(include_dirs)
set(link_dirs)
set(target_link_libs get_image ${OpenCV_LIBRARIES})

include_directories(${include_dirs})

add_executable(get_image ${sources})

link_directories(${link_dirs})

target_link_libraries(${target_link_libs})
