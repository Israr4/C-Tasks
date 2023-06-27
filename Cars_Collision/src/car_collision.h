#include <iostream>
#include <cmath>
#include <vector>



class Car 
{
    public:
    double x_, y_ ;         
    double velocity_,angle_;

    explicit Car(double, double, double, double);
};

bool isCalculatingCollision(const Car&, const Car&);