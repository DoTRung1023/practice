#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"
using namespace std;

int main() {
    Helicopter a(180, "haha");
    cout << a.get_fuel() << endl;
    cout << a.get_name() << endl;

    a.set_name("huhu");
    cout << a.get_name() << endl;

    a.fly(86, 68);
    cout << a.get_fuel() << endl;
    cout << a.get_numberOfFlights() << endl;

    a.fly(200, 360);
    cout << a.get_fuel() << endl;
    cout << a.get_numberOfFlights() << endl;
}