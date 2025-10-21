#include <iostream>

class Vehicle {
public:
  int passengers;
  int fuelcap;
  int mpg;

  int range();
};

int Vehicle::range() { return mpg * fuelcap; }

int main() {

  Vehicle minivan;

  minivan.passengers = 2;
  minivan.fuelcap = 16;
  minivan.mpg = 28;

  std::cout << "Range: " << minivan.range() << std::endl;

  return 0;
}
