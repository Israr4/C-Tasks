#ifndef VISUALIZER
#define VISUALIZER

#include <unistd.h>

#include <iostream>
#include <vector>

#include "CImg.h"
#include "car.h"

using namespace cimg_library;

class Visualizer
{
 private:
  size_t length_;
  size_t width_;

  CImg<unsigned char> canvas_;
  CImgDisplay display_;

 public:
  explicit Visualizer(size_t length, size_t width);
  void update(std::vector<Car>& all_cars);

 private:
  void drawRectangleShape(Car car, unsigned char color[3]);
};

#endif
