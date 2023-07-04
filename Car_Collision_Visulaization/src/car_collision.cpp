
    #include "car_collision.h"


    Car::Car(double x, double y, double velocity, double angle)
    {
        x_        = x;
        y_        = y;
        velocity_ = velocity;
        angle_    = angle * M_PI / 180;  
    }

    void Car::move()
    {
        x_ += velocity_ * cos(angle_);
        y_ += velocity_ * sin(angle_);
    }

    bool is_Colliding(const Car& car1, const Car& car2)
    {
        double time_x = (car1.velocity_ * cos(car1.angle_)) - (car2.velocity_ * cos(car2.angle_));
        double time_y = (car1.velocity_ * sin(car1.angle_)) - (car2.velocity_ * sin(car2.angle_));

        double dist_X = car2.x_ - car1.x_;
        double dist_Y = car2.y_ - car1.y_;

        double collisionTime = ((dist_X * time_x) + (dist_Y * time_y)) / ((time_x * time_x) + (time_y * time_y));

        return (collisionTime >= 0 && collisionTime <= 1);
     }