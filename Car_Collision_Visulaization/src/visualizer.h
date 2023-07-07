#ifndef VISUALIZER
#define VISUALIZER

#include <unistd.h>

#include <iostream>
#include <vector>

#include "CImg.h"
#include "car.h"


class Visualizer
{
 private:
  size_t length_;
  size_t width_;

  cimg_library :: CImg<unsigned char> canvas_;
  cimg_library :: CImgDisplay display_;

 public:
  size_t length() const;
  size_t width() const;

 public:
  explicit Visualizer(size_t length, size_t width);
  void update(std::vector<Car>& all_cars);

 private:
  void drawRectangleShape(Car car, unsigned char color[3]);
};

#endif