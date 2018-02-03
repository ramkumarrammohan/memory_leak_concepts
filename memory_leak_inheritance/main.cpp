#include <iostream>
//#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"

using namespace std;

int main()
{
    cout << "Memory leak welcomes you!\n" << endl;

    Vehicle *duster = new Car("Renault", "Duster", 2018);
    Vehicle *apache = new Bike("TVS", "Apache", 2018);

    delete duster;
    delete apache;

    return 0;
}
