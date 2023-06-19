// #include <iostream>

// class Car1
// {
//     public:
//     int mass_car1;
//     double velocity_car1;
//     double momentum_car1;

//     Car1(int mass,int velocity,int momentum)
//     {
//         mass_car1 = mass;
//         velocity_car1 = velocity;
//         momentum_car1 = momentum;
//     }

//     void east_side_movement_function()
//     {
//     for(int east_side_movement = 0; east_side_movement <= 100; east_side_movement + 3)
//     {
//         // if(east_side_movement<100)
//         // {
//         std::cout<<"*";
//         // }
//     }
//     }
// };

// int main()
// {
//     Car1 c(1000,10,20000);
//     c.east_side_movement_function();
//     std::cout<<std::endl;
//     return 0;
// }






#include <iostream>

struct Car
{
    int x_axis, y_axis;  
    double speed, angle;
};


bool checkCollisionFunction(const Car& car1, const Car& car2) 
{
    if (car1.x_axis < car2.x_axis + car2.speed && car1.x_axis + car1.speed > car2.x_axis && car1.y_axis < car2.y_axis + car2.angle && car1.y_axis + car1.angle > car2.y_axis)   
    {
        return true;    
    }
    else
    {
        return false;     
    }
}


int main()
 {
    Car car1 = { 2, 2, 10, 4 };    
    Car car2 = { 5, 4, 2, 3 };    

   
    if (checkCollisionFunction(car1, car2))
    {
        std::cout << "Collision detected" << std::endl;
    } 
    else 
    {
        std::cout << "No collision detected" << std::endl;
    }

    return 0;
}
