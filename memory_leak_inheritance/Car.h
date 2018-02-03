#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle
{
public:
    Car(string manf, string model, int year);
    ~Car();
};

#endif // CAR_H
