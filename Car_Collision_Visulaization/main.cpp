#include <chrono>
#include <iostream>
#include <thread>

#include "src/car.h"
#include "src/visualizer.h"

int main()
 {
  cimg_library :: cimg :: wait(100);
  Visualizer visualizer(800, 800);

  std::vector<Car> all_cars;
  all_cars.push_back(Car(visualizer.length(), visualizer.width()/2, 5, 180, 30, 10));
  all_cars.push_back(Car(0                  , visualizer.width()/2, 5, 0  , 30, 10));

  while (true) 
  {
    for (Car& car : all_cars) 
    {
      car.move();
      visualizer.update(all_cars);
      if(car.is_Colliding(car))
      {
        std::cout<<"Collision Detected"<<std::endl;
      }
    }
  }
  return 0;
}