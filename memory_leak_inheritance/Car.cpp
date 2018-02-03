#include "Car.h"
#include <iostream>

Car::Car(string manf, string model, int year) :
    Vehicle(manf, model, year)
{
    cout << "Constructor of car" << endl;
}

Car::~Car()
{
    cout << "Destructor of car" << endl;
}
