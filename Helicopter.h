#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <iostream>
#include "AirCraft.h"

using namespace std;

class Helicopter: public AirCraft
{
private:
    string name;
public:
    Helicopter();
    Helicopter(int w, string n);

    void fly(int headwind, int minutes);

    string get_name();
    void set_name(string n);
};

#endif