#ifndef DATA_VISUALIZATION_H
#define DATA_VISUALIZATION_H

// Your Shape class definition and other declarations



#include <iostream>
#include "CImg.h"
#include <vector>
#include "car_collision.h"
using namespace cimg_library;

class Visualizer 
{
    public:
    size_t length_;
    size_t width_;
    Visualizer();
    Visualizer(size_t length, size_t width);

    void drawRectangleShape(CImg<unsigned char>& canvas,Car car, unsigned char color[3]);
    void update(Car car1, Car car2);
};

#endif  