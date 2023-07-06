#include <chrono>  
#include <iostream>
#include <thread>  

#include "src/car.h"
#include "src/visualizer.h"

int main()
{
  std::vector<Car> all_cars;
  all_cars.push_back(Car(200, 2, 5, 45, 30, 10));
  all_cars.push_back(Car(2, 2, 5, 45, 30, 10));

  cimg::wait(100);
  Visualizer visualizer(800, 800);

  while (true)
  {
    for (Car& car : all_cars)
    {
      car.move();
      visualizer.update(all_cars);
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(40));
  }
  return 0;
}
