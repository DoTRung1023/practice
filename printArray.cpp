#include <iostream>

using namespace std;

void printArray(double* array, int size) {
    cout << "The array is:" << endl;
    for (int i = 0; i<size; i++) {
        cout << array[i] << "\t";
    }
    cout << endl;
}