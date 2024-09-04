#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"

using namespace std;

Helicopter::Helicopter(): Helicopter(0, 0){}
Helicopter::Helicopter(int w, string n): AirCraft(w), name(n){}

void Helicopter::fly(int headwind, int minutes){
    int extraWeight = weight - 5670;
    double fuelNeeded = 0;

    if(headwind < 40) {
        fuelNeeded += 0.2*minutes;
    }
    else{
        fuelNeeded += 0.4*minutes;
    }
    if(extraWeight > 0) {
        fuelNeeded += extraWeight*0.01*minutes;
    }
    if(fuel - fuelNeeded >= 20) {
        numberOfFlights++;
        fuel -= fuelNeeded;
    }
}

string Helicopter::get_name(){
    return name;
}
void Helicopter::set_name(string n){
    this->name = n;
}
