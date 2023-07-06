#include <chrono>
#include <iostream>
#include <thread>

#include "src/car.h"
#include "src/visualizer.h"

int main() {
  std::vector<Car> all_cars;
  all_cars.push_back(Car(800, 400, 5, 180, 30, 10));
  all_cars.push_back(Car(0  , 400, 5, 0  , 30, 10));
 
  cimg_library ::cimg::wait(100);
  Visualizer visualizer(800, 800);

  while (true) {
    for (Car& car : all_cars) {
      car.move();
      visualizer.update(all_cars);
    }
  }
  return 0;
}