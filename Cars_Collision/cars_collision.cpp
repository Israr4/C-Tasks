#include <iostream>
#include <cmath>
#include <vector>

class Object 
{
    public:
    double x_value, y_value;    
    double velocity,angle;

    Object()
    {
        x_value  = 0;
        y_value  = 0;
        velocity = 0;
        angle    = 0;
    }

    Object(double x_value, double y_value, double velocity, double angle)
    {
        this -> x_value  = x_value;
        this -> y_value  = y_value;
        this -> velocity = velocity;
        this -> angle    = angle;  
    }
    
};

void calculateCollisionFunction(const Object& obj1, const Object& obj2, double& collisionTime)
{
    
   
    double time_x = (obj1.velocity * cos(obj1.angle)) - (obj2.velocity * cos(obj2.angle));
    double time_y = (obj1.velocity * sin(obj1.angle)) - (obj2.velocity * sin(obj2.angle));


    double dist_X = obj2.x_value - obj1.x_value;
    double dist_Y = obj2.y_value - obj1.y_value;

    collisionTime = ((dist_X * time_x) + (dist_Y * time_y)) / ((time_x * time_x) + (time_y * time_y));
}


int main() 
{  
    Object object1(200, 2, 5, 45  * M_PI / 180);    //angle in radian    
    Object object2(55 , 4, 7, 135 * M_PI / 180);   
 
    // Object object1(2, 2, 5, 45  * M_PI / 180);    //angle in radian    
    // Object object2(5, 4, 7, 135 * M_PI / 180);    
    Object intersection;

    double collisionTime;
    calculateCollisionFunction(object1, object2, collisionTime);

    if (collisionTime >= 0 && collisionTime <= 1) 
    {
        double collision_X = object1.x_value + object1.velocity * cos(object1.angle) * collisionTime;
        double collision_Y = object1.y_value + object1.velocity * sin(object1.angle) * collisionTime;

        std::cout << "Collision detected!" << std::endl;
        std::cout << "Intersection points are: " << collision_X << ", " << collision_Y  << std::endl;
    } 
    else 
    {
        std::cout << "No collision detected." << std::endl;
    }

    return 0;
}



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





//  Object object1(2, 2,5, 45  * M_PI / 180);    //angle in radian    
//     Object object2(5, 4,7, 135 * M_PI / 180);   





// #include <iostream>
// #include <cmath>

// class Car
// {
//     public:
//     double x_axis, y_axis, speed, angle;

//     Car(double x,double y,double speedd,double anglee)
//     {
//         x_axis = x;
//         y_axis = y;
//         speed = speedd;
//         angle = anglee;
//     }

    
// };


// bool checkCollisionFunction(const Car& car1, const Car& car2) 
// {
//     double time = (car2.x_axis - car1.x_axis)/((car1.speed*cos(car1.angle)) - (car2.speed*cos(car2.angle)));
//     double intersected_x_axis = car1.x_axis + car1.speed * cos(car1.angle) * time;
//     double intersected_y_axis = car1.y_axis + car1.speed * sin(car1.angle) * time;

//     if(car1.x_axis == intersected_x_axis && car1.y_axis == intersected_y_axis)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }

//     // if (car1.x_axis < car2.x_axis + car2.speed && car1.x_axis + car1.speed > car2.x_axis && car1.y_axis < car2.y_axis + car2.angle && car1.y_axis + car1.angle > car2.y_axis)   
//     // {
//     //     return true;    
//     // }
//     // else
//     // {
//     //     return false;     
//     // }
// }


// int main()
//  {
//     Car car1(2, 5, 10, 90);    
//     Car car2(5, 4, 2, 45);    

   
//     if (checkCollisionFunction(car1, car2))
//     {
//         std::cout << "Collision detected" << std::endl;
//     } 
//     else 
//     {
//         std::cout << "No collision detected" << std::endl;
//     }

//     return 0;
// }







// Certainly! Let's consider a simplified scenario where both objects are moving linearly in a 2D plane. If you have the initial positions (x1, y1) and (x2, y2), the velocities (v1, v2), and the angles (θ1, θ2) of the objects, you can calculate the time of intersection (t) using the following equation:

// t = (x2 - x1) / (v1 * cos(θ1) - v2 * cos(θ2))

// Once you have the value of t, you can substitute it back into the equation to find the coordinates of the intersection point (xi, yi):

// xi = x1 + v1 * cos(θ1) * t
// yi = y1 + v1 * sin(θ1) * t

// Note that this equation assumes constant velocities for both objects and neglects any external forces or interactions. It provides an approximate solution under these assumptions. If you need to account for more complex scenarios or factors such as acceleration, friction, or collision dynamics, more sophisticated equations or numerical methods may be necessary.













// bool checkCollisionFunction(const Object& obj1, const Object& obj2, Object& intersection) // only checking collision with the help of dimension width and height
// {
//     double left   = std::max(obj1.x_value, obj2.x_value);
//     double right  = std::min(obj1.x_value + obj1.width, obj2.x_value + obj2.width);
//     double top    = std::max(obj1.y_value, obj2.y_value);
//     double bottom = std::min(obj1.y_value + obj1.height, obj2.y_value + obj2.height);

//     if (left < right && top < bottom) 
//     {
//         intersection.x_value = left;
//         intersection.y_value = top;
//         intersection.width   = right - left;
//         intersection.height  = bottom - top;
//         return true;   
//     }

//     else
//     {
//     return false;     
//     }
// }
