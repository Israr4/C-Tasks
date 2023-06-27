cmake_minimum_required(VERSION 3.0.0)
project(CarCollisions VERSION 0.1.0 LANGUAGES C CXX)


add_library(
    car_collision  
    src/car_collision.cpp
    src/car_collision.h
)
add_executable(CarCollisions 
               main.cpp)

target_link_libraries(CarCollisions    PRIVATE   car_collision)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
