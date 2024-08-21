#include <iostream>
#include <string>
#include "Unit.h"

using namespace std;

#ifndef APARTMENTBUIDING_H
#define APARTMENTBUIDING_H

class ApartmentBuilding
{
private:
    int curr_capacity;
    int max_capacity;
    Unit* contents;
public:
    ApartmentBuilding(); //default constructor allocates capacity for 10 units

    ApartmentBuilding(int curr_capacity); // constructor for ApartmentBuilding with given capacity

    int get_Capacity(); // returns the maximum number of units allowed

    // returns the current number of units in the ApartmentBuilding
    int get_Current_Number_of_Units();

    // return a dynamic array of the units in the apartment buiding
    Unit* get_Contents();

    // returns true and add unit to the apartment if there is sufficient space
    // otherwise returns false
    bool add_Unit(Unit unit);

    // destructor
    ~ApartmentBuilding();
};

#endif