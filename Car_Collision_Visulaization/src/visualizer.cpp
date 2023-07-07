#include "visualizer.h"

Visualizer ::Visualizer(size_t length, size_t width)
    : canvas_(length, width, 1, 3, 255), display_(canvas_, "Car Collision")
{
  length_ = length;
  width_  = width;
}

size_t Visualizer::length() const { return length_; }

size_t Visualizer::width() const { return width_; }

void Visualizer::drawRectangleShape(Car car, unsigned char color[3])
{
  canvas_.draw_rectangle(
      car.x() - (car.width() / 2), car.y() - (car.height() / 2),
      car.x() + (car.width() / 2), car.y() + (car.height() / 2), color, 1.0f);
}

void Visualizer ::update(std::vector<Car>& all_cars)
{
  unsigned char red[3] = {255, 0, 0};

  canvas_.fill(100);

  for (const Car& car : all_cars)
  {
    drawRectangleShape(car, red);
  }

  canvas_.display(display_);
}