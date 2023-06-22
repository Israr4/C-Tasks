#include <iostream>
#include <cmath>
#include <vector>

class Car 
{
    public:
    double x_, y_ ;   
    double velocity_,angle_;

    Car()
    {
        x_        = 0;
        y_        = 0;
        velocity_ = 0;
        angle_    = 0;
    }

    Car(double x, double y, double velocity, double angle)
    {
        x_        = x;
        y_        = y;
        velocity_ = velocity;
        angle_    = angle;  
    }
    
};

bool calculateCollision(const Car& obj1, const Car& obj2, double collisionTime)
{
    double time_x = (obj1.velocity_ * cos(obj1.angle_)) - (obj2.velocity_ * cos(obj2.angle_));
    double time_y = (obj1.velocity_ * sin(obj1.angle_)) - (obj2.velocity_ * sin(obj2.angle_));

    double dist_X = obj2.x_ - obj1.x_;
    double dist_Y = obj2.y_ - obj1.y_;

    collisionTime = ((dist_X * time_x) + (dist_Y * time_y)) / ((time_x * time_x) + (time_y * time_y));

    if (collisionTime >= 0 && collisionTime <= 1) 
    {
        double collision_X = obj1.x_ + obj1.velocity_ * cos(obj1.angle_) * collisionTime;
        double collision_Y = obj1.y_ + obj1.velocity_ * sin(obj1.angle_) * collisionTime;
        return true;
    } 
    else 
    {
        return false;
    }
}


int main() 
{  
    Car object1(200, 2, 5, 45  * M_PI / 180);    //angle in radian    
    Car object2(55 , 4, 7, 135 * M_PI / 180);   
 
    // Car object1(2, 2, 5, 45  * M_PI / 180);    //angle in radian    
    // Car object2(5, 4, 7, 135 * M_PI / 180);    
    double collisionTime;
    if(calculateCollision(object1, object2, collisionTime))
    {
        std::cout << "Collision detected!" << std::endl;
    }
    else
    {
        std::cout << "No collision detected." << std::endl;
    }

    return 0;
}
