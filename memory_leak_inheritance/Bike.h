#ifndef Bike_H
#define Bike_H

#include "Vehicle.h"

class Bike : public Vehicle
{
public:
    Bike(string manf, string model, int year);
    ~Bike();
};

#endif // Bike_H
