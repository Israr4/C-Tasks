

#include "data_visualization.h"


Visualizer :: Visualizer()
{
    length_ = 0;
    width_  = 0;
}

Visualizer :: Visualizer(size_t length, size_t width)
{
    length_ = length;
    width_  = width;
}


void Visualizer :: drawRectangleShape(CImg<unsigned char>& canvas, Car car, unsigned char color[3]) 
{
    int carWidth  = 50;
    int carHeight = 30;
    car.move();

    canvas.draw_rectangle(car.x_ - (carWidth / 2), car.y_ - (carHeight / 2), car.x_ + (carWidth / 2), car.y_ + (carHeight / 2), color, 1.0f);
}


void Visualizer :: update( Car car1, Car car2)
{
    int length = 1000;
    int width  = 1000;
    Visualizer(length,width);

    CImg<unsigned char> canvas(length, width, 1, 3, 255); 

    unsigned char red[3] = {255, 0, 0};
    drawRectangleShape(canvas, car1, red);

    unsigned char blue[3] = {0, 0, 255};
    drawRectangleShape(canvas, car2, blue);

    CImgDisplay display(canvas, "Rectangle and Circle"); 

    while (!display.is_closed()) 
    {
        display.wait();
    }
}