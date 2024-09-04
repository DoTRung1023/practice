#include <iostream>
#include <cmath>
#include "AirCraft.h"
#include "Airplane.h"

using namespace std;

Airplane::Airplane(): Airplane(0, 0){}
Airplane::Airplane(int w, int p): AirCraft(w), numPassengers(p){}

void Airplane::reducePassengers(int x){
    numPassengers -= x;
    if(numPassengers < 0) {
        numPassengers = 0;
    }
}
void Airplane::fly(int headwind, int minutes){
    double fuelNeeded = 0.001*numPassengers*minutes;

    if(headwind < 60) {
        fuelNeeded += 0.3*minutes;
    }
    else {
        fuelNeeded += 0.5*minutes;
    }
    if(fuel - fuelNeeded >= 20) {
        fuel -= fuelNeeded;
        numberOfFlights++;
    }
}

int Airplane::get_numPassengers(){
    return numPassengers;
}
void Airplane::set_numPassengers(int p){
    this->numPassengers = p;
}
