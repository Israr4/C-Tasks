#include "visualizer.h"

Visualizer :: Visualizer(size_t length, size_t width):canvas_(length, width, 1, 3, 255), display_(canvas_, "Rectangle and Circle")
{
    length_  = length;
    width_   = width;  
}

void Visualizer :: drawRectangleShape(CImg<unsigned char>& canvas, Car car, unsigned char color[3])  
{
    std::cout<<"Hello"<<std::endl;
    canvas.draw_rectangle(car.x_ - (car.carWidth_ / 2), car.y_ - (car.carHeight_ / 2), car.x_ + (car.carWidth_ / 2), car.y_ + (car.carHeight_ / 2), color, 1.0f);   
}

void Visualizer :: update(std::vector<Car> &all_cars)
{
    int length = 1000;
    int width  = 1000; 
    Visualizer visualize(length,width);
     
    CImg<unsigned char>& canvas = visualize.canvas_;
    CImgDisplay& display        = visualize.display_;

    unsigned char red[3] = {255, 0, 0};
    canvas.fill(100);
    for (const Car& car : all_cars)
    {
        drawRectangleShape(canvas,car, red);
    } 
    canvas.display(display);
    cimg::wait(100); 
}