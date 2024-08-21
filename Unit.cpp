#include <iostream>
#include <string>
#include "Unit.h"

using namespace std;

// a default constructor 
Unit::Unit(){
    this->unit_val = 0;
    this->num_beds = 0;
    this->unit_size = 0;
}

// a constructor that takes: the valur, number of bedrooms, the size
Unit::Unit(int unit_val, int num_beds, double unit_size){
    this->unit_val = unit_val;
    this->num_beds = num_beds;
    this->unit_size = unit_size;
}

// returns the number of bedrooms for the unit
int Unit::get_Num_Bedrooms(){
    return num_beds;
}

// returns the value int dollars of the unit
int Unit::get_Value() {
    return unit_val;
}

// returns the number of square meters in the unit
double Unit::get_Area() {
    return unit_size;
}
