#include <iostream>
#include "AirCraft.h"
#include "Airplane.h"
using namespace std;

int main() {
    Airplane a(240, 197);
    cout << a.get_weight() << endl;
    cout << a.get_numPassengers() << endl;

    a.reducePassengers(80);
    cout << a.get_numPassengers() << endl;

    a.set_numPassengers(128);
    cout << a.get_numPassengers() << endl;

    a.fly(113, 120);
    cout << a.get_fuel() << endl;
    cout << a.get_numberOfFlights() << endl;

    a.fly(200, 15);
    cout << a.get_fuel() << endl;
    cout << a.get_numberOfFlights() << endl;
}