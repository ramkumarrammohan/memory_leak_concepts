#include "Bike.h"
#include <iostream>

Bike::Bike(string manf, string model, int year) :
    Vehicle(manf, model, year)
{
    cout << "Constructor of Bike\n" << endl;
}

Bike::~Bike()
{
    cout << "Destructor of bike\n" << endl;
}
