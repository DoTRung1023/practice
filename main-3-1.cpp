#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"
#include "AirFleet.h"
using namespace std;

int main() {
    AirFleet a;
    AirCraft** b = a.get_fleet();

    for (int i = 0; i < 5; i++) {
        cout << b[i] -> get_weight() << endl;
    }
}