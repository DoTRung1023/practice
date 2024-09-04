#include <iostream>
#include "AirCraft.h"
using namespace std;

int main() {
    AirCraft a;
    cout << a.get_weight() << endl;
    cout << a.get_fuel() << endl;
    cout << a.get_numberOfFlights() << endl;

    a.refuel();
    a.set_weight(100);
    a.set_fuel(68);
    a.set_numberOfFlights(12);

    cout << a.get_weight() << endl;
    cout << a.get_fuel() << endl;
    cout << a.get_numberOfFlights() << endl;
}