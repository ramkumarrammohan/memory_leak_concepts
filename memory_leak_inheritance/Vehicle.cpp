#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(string manf, string model, int year):
    m_manufacture(manf),
    m_modelName(model),
    m_year(year)
{
    cout << "Constructor of vehicle" << endl;
}

Vehicle::~Vehicle()
{
    cout << "Destructor of vehicle" << endl;
}

string Vehicle::manufacturer()
{
    return m_manufacture;
}

string Vehicle::model()
{
    return m_modelName;
}

int Vehicle::year()
{
    return m_year;
}
