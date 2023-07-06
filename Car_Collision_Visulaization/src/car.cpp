#include "car.h"

Car::Car(double x, double y, double velocity, double angle, double width,
         double height)
{
  x_ = x;
  y_ = y;
  velocity_ = velocity;
  angle_ = angle * M_PI / 180;
  width_ = width;
  height_ = height;
}

double Car::x() const { return x_; }

double Car::y() const { return y_; }

double Car::velocity() const { return velocity_; }

double Car::angle() const { return angle_; }

double Car::width() const { return width_; }

double Car::height() const { return height_; }

void Car::move()
{
  x_ += velocity_ * cos(angle_);
  y_ += velocity_ * sin(angle_);
}

bool Car::is_Colliding(const Car& target_car)
{
  double time_x = (velocity_ * cos(angle_)) -
                  (target_car.velocity() * cos(target_car.angle()));
  double time_y = (velocity_ * sin(angle_)) -
                  (target_car.velocity() * sin(target_car.angle()));

  double dist_X = target_car.x() - x_;
  double dist_Y = target_car.y() - y_;

  double collisionTime = ((dist_X * time_x) + (dist_Y * time_y)) /
                         ((time_x * time_x) + (time_y * time_y));

  return collisionTime >= 0 && collisionTime <= 1;
}
