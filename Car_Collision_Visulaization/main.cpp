#include <iostream>
#include "src/visualizer.h"
#include "src/car.h"



int main() 
{
    std::vector<Car> all_cars;

    all_cars.push_back(Car(200, 2, 5, 45 ,30,10));
    all_cars.push_back(Car(2, 2, 5, 45,30,10 ));

    Visualizer *visualize;
    while(true)
    {
    for (Car& car : all_cars)
    {
        car.move();
        visualize -> update(all_cars);
    }
    }
    return 0;
}