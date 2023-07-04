cmake_minimum_required(VERSION 3.0.0)
project(DataVisualization VERSION 0.1.0 LANGUAGES C CXX)


add_library(
    Visualizer
    src/CImg.h 
    src/data_visualization.h
    src/data_visualization.cpp
)

add_library(
    Car
    src/car_collision.h
    src/car_collision.cpp
)

add_executable(DataVisualizer 
               main.cpp)

target_link_libraries(DataVisualizer     PRIVATE   Visualizer Car  X11  pthread)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
