#include "src/car_collision.h"

int main() 
{  
    Car car1(200, 2, 5, 45 );    //angle in radian    
    Car car2(55 , 4, 7, 135);   
 
    // Car car1(2, 2, 5, 45 );    //angle in radian    
    // Car car2(5, 4, 7, 135); 


    if(isCalculatingCollision(car1, car2))
    {
        std::cout << "Collision detected!" << std::endl;
    }
    else
    {
        std::cout << "No collision detected." << std::endl;
    }
    return 0;
}
