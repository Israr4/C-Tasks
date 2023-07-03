#include <iostream>
#include "src/data_visualization.h"



int main() 
{
    int a = 100;
    int b = 100;
   Visualizer obj1(a,b);
 
    CImg<unsigned char> canvas(500, 500, 1, 3, 255);  
    

    Visualizer* rectangle = new Visualizer(a,b);
    Visualizer* circle    = new Visualizer(a,b);

    rectangle -> drawRectangleShape(canvas);
    circle    -> drawCircleShape(canvas);

    CImgDisplay display(canvas, "Rectangle and Circle"); 

    while (!display.is_closed()) 
    {
        display.wait();
    }

    delete rectangle;
    delete circle;

    return 0;
}