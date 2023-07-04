

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


void Visualizer :: drawRectangleShape( Car car, unsigned char color[3]) 
{
    int carWidth  = 50;
    int carHeight = 30;
    int length = 1000;
    int width  = 1000;
    Visualizer(length,width);

    CImg<unsigned char> canvas(length, width, 1, 3, 255); 
    CImgDisplay display(canvas, "Rectangle and Circle"); 

    for (int i = 0; i < 10; ++i) 
    {
        std::cout<<"Hello"<<std::endl;
        canvas.fill(100);
        car.x_ += 5;
        car.y_ += 20;
        // car.move();
        canvas.draw_rectangle(car.x_ - (carWidth / 2), car.y_ - (carHeight / 2), car.x_ + (carWidth / 2), car.y_ + (carHeight / 2), color, 1.0f);
        canvas.display(display);
        cimg::wait(100);
    }

    while (!display.is_closed()) 
    {
        display.wait();
    }
    
}


void Visualizer :: update(std::vector<Car> &all_cars)
{
    unsigned char red[3] = {255, 0, 0};
    for(size_t i=0; i < all_cars.size();i++)
    {
        drawRectangleShape(all_cars[i], red);
    }
   
}