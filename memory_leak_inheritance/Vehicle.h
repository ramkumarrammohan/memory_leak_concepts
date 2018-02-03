#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle
{
public:
    Vehicle(string manf, string model, int year);
    ~Vehicle();
//    virtual ~Vehicle();

    string manufacturer();
    string model();
    int year();

private:
    string m_manufacture;
    string m_modelName;
    int m_year;
};

#endif // VEHICLE_H
