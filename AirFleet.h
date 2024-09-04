#ifndef AIRFLEET_H
#define AIRFLEET_H

#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"
using namespace std;

class AirFleet {
    private:
        AirCraft **fleet;
    public:
        AirFleet();
        AirCraft **get_fleet();
};

#endif