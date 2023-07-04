#ifndef CAR_COLLISION_H
#define CAR_COLLISION_H

#include <iostream>
#include <cmath>
#include <vector>



class Car 
{
    public:
    double x_, y_ ;         
    double velocity_,angle_;
    Car();
    explicit Car(double, double, double, double);
    void move();
};

bool isCalculatingCollision(const Car&, const Car&);

#endif  