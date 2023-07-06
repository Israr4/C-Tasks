#ifndef CAR
#define CAR

#include <cmath>
#include <iostream>
#include <vector>

class Car
{
 private:
  double x_, y_;
  double velocity_, angle_;
  double width_, height_;

 public:
  explicit Car(double, double, double, double, double, double);

  double x() const;
  double y() const;
  double velocity() const;
  double angle() const;
  double width() const;
  double height() const;

  void move();

  bool is_Colliding(const Car& target_car);
};

#endif