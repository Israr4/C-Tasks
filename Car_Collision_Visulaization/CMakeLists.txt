cmake_minimum_required(VERSION 3.0.0)
project(DataVisualization VERSION 0.1.0 LANGUAGES C CXX)


add_library(
    Visualizer
    src/CImg.h 
    src/visualizer.h
    src/visualizer.cpp
)

add_library(
    Car
    src/car.h
    src/car.cpp
)

add_executable(DataVisualizer 
               main.cpp)

target_link_libraries(DataVisualizer     PRIVATE   Visualizer Car  X11  pthread)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)