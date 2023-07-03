cmake_minimum_required(VERSION 3.0.0)
project(DataVisualization VERSION 0.1.0 LANGUAGES C CXX)


add_library(
    visualizer
    src/CImg.h 
    src/data_visualization.h
    src/data_visualization.cpp
)

add_executable(DataVisualizer 
               main.cpp)

target_link_libraries(DataVisualizer     PRIVATE   visualizer  X11  pthread)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)