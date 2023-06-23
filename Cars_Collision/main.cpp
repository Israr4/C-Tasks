#include "include/car_collision.h"

int main() 
{  
    // Car object1(200, 2, 5, 45 );    //angle in radian    
    // Car object2(55 , 4, 7, 135);   
 
    Car object1(2, 2, 5, 45 );    //angle in radian    
    Car object2(5, 4, 7, 135); 


    if(isCalculatingCollision(object1, object2))
    {
        std::cout << "Collision detected!" << std::endl;
    }
    else
    {
        std::cout << "No collision detected." << std::endl;
    }

    return 0;
}
