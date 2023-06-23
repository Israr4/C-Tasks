#include <iostream>
#include <cmath>
#include <vector>

class Car 
{
    public:
    double x_, y_ ;   
    double velocity_,angle_;

    explicit Car(double x, double y, double velocity, double angle)
    {
        x_        = x;
        y_        = y;
        velocity_ = velocity;
        angle_    = angle * M_PI / 180;  
    }
};

bool calculateCollision(const Car& obj1, const Car& obj2)
{
    double time_x = (obj1.velocity_ * cos(obj1.angle_)) - (obj2.velocity_ * cos(obj2.angle_));
    double time_y = (obj1.velocity_ * sin(obj1.angle_)) - (obj2.velocity_ * sin(obj2.angle_));

    double dist_X = obj2.x_ - obj1.x_;
    double dist_Y = obj2.y_ - obj1.y_;

    double collisionTime = ((dist_X * time_x) + (dist_Y * time_y)) / ((time_x * time_x) + (time_y * time_y));

    if (collisionTime >= 0 && collisionTime <= 1) 
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
    // Car object1(200, 2, 5, 45 );    //angle in radian    
    // Car object2(55 , 4, 7, 135);   
 
    Car object1(2, 2, 5, 45 );    //angle in radian    
    Car object2(5, 4, 7, 135); 


    if(calculateCollision(object1, object2))
    {
        std::cout << "Collision detected!" << std::endl;
    }
    else
    {
        std::cout << "No collision detected." << std::endl;
    }

    return 0;
}
