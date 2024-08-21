#include <iostream>
#include <string>
#include "Unit.h"

using namespace std;

int main() {
    Unit a;

    cout << "Default constructor a: " << endl;
    cout << "Area: " <<  a.get_Area() << endl;
    cout << "Nume_Bedrooms: " <<  a.get_Num_Bedrooms() << endl;
    cout << "Value: " <<  a.get_Value() << endl;

    Unit b(10000, 4, 150.78);
    cout << "Default constructor b: " << endl;
    cout << "Area: " <<  b.get_Area() << endl;
    cout << "Nume_Bedrooms: " <<  b.get_Num_Bedrooms() << endl;
    cout << "Value: " <<  b.get_Value() << endl;

    return 0;
}