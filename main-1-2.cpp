#include <iostream>

using namespace std;

extern void modifyArray(double*, int, double);
extern void printArray(double*, int);

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    double* array = new double[size];
    for (int i = 0; i<size; i++) {
        cout << "Enter #" << i+1 << " number: ";
        cin >> array[i];
    }
    double value;
    cout << "Enter a modify value: ";
    cin >> value;

    printArray(array, size);
    modifyArray(array, size, value);
    printArray(array, size);

    delete[] array;

    return 0;
}
