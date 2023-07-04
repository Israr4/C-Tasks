#include <iostream>
#include "src/data_visualization.h"
#include "src/car_collision.h"



int main() 
{

    Car car1(200, 2, 5, 45 );    //angle in radian    
    Car car2(55 , 4, 7, 135);  
    Visualizer visualize; 
 
    // Car car1(2, 2, 5, 45 );    //angle in radian    
    // Car car2(5, 4, 7, 135); 
    // Visualizer visualize;

    visualize.update(car1,car2); 

    return 0;
}