#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle
{
public:
    /**
     * @brief Vehicle - Constructs vehicle with given specs
     */
    Vehicle(string manf, string model, int year);

    /**
     * @brief ~Vehicle - Destructs base and derived class objs
     */
    virtual ~Vehicle();

//    Doesn't care about derived objs when not starts with virtual
//    ~Vehicle();

    string manufacturer();
    string model();
    int year();

private:
    string m_manufacture;
    string m_modelName;
    int m_year;
};

#endif // VEHICLE_H
