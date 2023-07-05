#include <iostream>
#include "src/data_visualization.h"
#include "src/car_collision.h"



int main() 
{
    std::vector<Car> all_cars;

    all_cars.push_back(Car(200, 2, 5, 45 ));
    all_cars.push_back(Car(55 , 4, 7, 135 ));

    Visualizer visualize;
    for (const Car& car : all_cars)
    {
        visualize.update(all_cars);
    }
    return 0;
}