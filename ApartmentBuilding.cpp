#include <iostream>
#include <string>
#include "Unit.h"
#include "ApartmentBuilding.h"

using namespace std;

//default constructor allocates capacity for 10 units
ApartmentBuilding::ApartmentBuilding() {
    this->curr_capacity = 0;
    this->max_capacity = 0;
    this->contents = new Unit[0];
}

// constructor for ApartmentBuilding with given capacity
ApartmentBuilding::ApartmentBuilding(int max_capacity) {
    this->curr_capacity = 0;
    this->max_capacity = max_capacity;
    this->contents = new Unit[max_capacity];  
}

// returns the maximum number of units allowed
int ApartmentBuilding::get_Capacity() {
    return max_capacity;
}

// returns the current number of units in the ApartmentBuilding
int ApartmentBuilding::get_Current_Number_of_Units() {
    return curr_capacity;
}

// return a dynamic array of the units in the apartment buiding
Unit* ApartmentBuilding::get_Contents() {
    return contents;
}

// returns true and add unit to the apartment if there is sufficient space
// otherwise returns false
bool ApartmentBuilding::add_Unit(Unit unit) {
    if (curr_capacity < max_capacity) {
        contents[curr_capacity] = unit;
        curr_capacity++;
        return true;
    }
    else {
        return false;
    }
}

// destructor
ApartmentBuilding::~ApartmentBuilding(){
    delete[] contents;
}
