#include <iostream>
#include <string>
#include "Unit.h"
#include "ApartmentBuilding.h"

using namespace std;

int main() {
    ApartmentBuilding a;
    cout << "ApartmentBuilding a: " << endl;
    cout << "Capacity: " << a.get_Capacity() << endl;
    cout << "Current number of units: " << a.get_Current_Number_of_Units() << endl;

    Unit a1;
    Unit a2(100, 5, 49.4);
    Unit a3(2372, 34, 54.87);
    Unit a4(21687, 48, 43.785);
    Unit a5(327, 25, 39.49);
    Unit a6(72, 9, 47.38);

    if(a.add_Unit(a1)) {
        cout << "Unit #1 is added successfully" << endl;
    }
    else {
        cout << "Cannot add unit #1" << endl;
    }
    if(a.add_Unit(a2)) {
        cout << "Unit #2 is added successfully" << endl;
    }
    else {
        cout << "Cannot add unit #2" << endl;
    }
    if(a.add_Unit(a3)) {
        cout << "Unit #3 is added successfully" << endl;
    }
    else {
        cout << "Cannot add unit #3" << endl;
    }
    if(a.add_Unit(a4)) {
        cout << "Unit #4 is added successfully" << endl;
    }
    else {
        cout << "Cannot add unit #4" << endl;
    }
    if(a.add_Unit(a5)) {
        cout << "Unit #5 is added successfully" << endl;
    }
    else {
        cout << "Cannot add unit #5" << endl;
    }
    if(a.add_Unit(a6)) {
        cout << "Unit #6 is added successfully" << endl;
    }
    else {
        cout << "Cannot add unit #6" << endl;
    }

    ApartmentBuilding b(5);
    cout << "ApartmentBuilding b: " << endl;
    cout << "Capacity: " << b.get_Capacity() << endl;
    cout << "Current number of units: " << b.get_Current_Number_of_Units() << endl;

    Unit b1;
    Unit b2(100, 5, 49.4);
    Unit b3(2372, 34, 54.87);
    Unit b4(21687, 48, 43.785);
    Unit b5(327, 25, 39.49);
    Unit b6(72, 9, 47.38);

    if(b.add_Unit(b1)) {
        cout << "Unit #1 is added successfully" << endl;
    }
    else {
        cout << "Cannot add unit #1" << endl;
    }
    if(b.add_Unit(b2)) {
        cout << "Unit #2 is added successfully" << endl;
    }
    else {
        cout << "Cannot add unit #2" << endl;
    }
    if(b.add_Unit(b3)) {
        cout << "Unit #3 is added successfully" << endl;
    }
    else {
        cout << "Cannot add unit #3" << endl;
    }
    if(b.add_Unit(b4)) {
        cout << "Unit #4 is added successfully" << endl;
    }
    else {
        cout << "Cannot add unit #4" << endl;
    }
    if(b.add_Unit(b5)) {
        cout << "Unit #5 is added successfully" << endl;
    }
    else {
        cout << "Cannot add unit #5" << endl;
    }
    if(b.add_Unit(b6)) {
        cout << "Unit #6 is added successfully" << endl;
    }
    else {
        cout << "Cannot add unit #6" << endl;
    }

    return 0;
}