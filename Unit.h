#include <iostream>
#include <string>

using namespace std;

#ifndef UNIT_H
#define UNIT_H

class Unit
{
private:
    int unit_val;
    int num_beds;
    double unit_size;
public:
    // a default constructor 
    Unit();

    // a constructor that takes: the valur, number of bedrooms, the size
    Unit(int unit_val, int num_beds, double unit_size);

    int get_Num_Bedrooms(); // returns the number of bedrooms for the unit

    int get_Value(); // returns the value int dollars of the unit

    double get_Area(); // returns the number of square meters in the unit
};

#endif
