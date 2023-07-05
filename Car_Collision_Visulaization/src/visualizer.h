#ifndef DATA_VISUALIZATION_H
#define DATA_VISUALIZATION_H

#include <iostream>
#include <unistd.h>
#include "CImg.h"
#include <vector>
#include "car.h"
using namespace cimg_library;

class Visualizer 
{
    public:
    size_t length_;
    size_t width_;
    CImg<unsigned char> canvas_;
    CImgDisplay display_;

    public:
    explicit Visualizer(size_t length, size_t width);
    void drawRectangleShape(CImg<unsigned char>& canvas, Car car, unsigned char color[3]);
    void update(std::vector<Car> &all_cars);
};

#endif  