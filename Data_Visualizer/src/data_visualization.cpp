#include "data_visualization.h"


Visualizer :: Visualizer(size_t length, size_t width)
{
    length_ = length;
    width_  = width;
}


void Visualizer :: drawRectangleShape(CImg<unsigned char>& canvas) 
{
    unsigned char red[3] = {255, 0, 0};
    canvas.draw_rectangle(10, 10, 10 + length_, 10 + width_, red, 1.0f);
}

void Visualizer :: drawCircleShape(CImg<unsigned char>& canvas) 
{
    unsigned char green[3] = {0, 255, 0};
    int center_X = 150 + length_ / 2;
    int center_Y = 150 + width_ / 2;
    int radius = length_ / 2;
    canvas.draw_circle(center_X, center_Y, radius, green, 1.0f);
}