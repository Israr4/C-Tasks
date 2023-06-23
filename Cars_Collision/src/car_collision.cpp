#include "../include/car_collision.h"


    Car::Car(double x, double y, double velocity, double angle)
    {
        x_        = x;
        y_        = y;
        velocity_ = velocity;
        angle_    = angle * M_PI / 180;  
    }


    bool isCalculatingCollision(const Car& obj1, const Car& obj2)
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


