#include <iostream>

using namespace std;

extern double* duplicateArray(double*, int);
extern void printArray(double*, int);

int main() {
    int length;
    cout << "Enter the length: ";
    cin >> length;

    double array[length];
    for (int i = 0; i<length; i++) {
        cout << "Enter the #" << i+1 << " number: ";
        cin >> array[i];
    }
    cout << endl;
    cout << "The initial array is: " << endl;
    printArray(array, length);

    double* duplicate_array = duplicateArray(array, length); 
    cout << "The duplicate array is: #1" << endl;
    printArray(duplicate_array, length);
    cout << "The duplicate array is: #2" << endl;
    printArray(duplicateArray(array, length), length);

    delete[] duplicate_array;

    return 0;
}