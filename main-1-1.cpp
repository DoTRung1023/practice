#include <iostream>

using namespace std;

extern double arrayMin(double*, int);

int main() {
    int length;
    cout << "Enter the length: ";
    cin >> length;

    double array[length];
    for (int i = 0; i<length; i++) {
        cout << "Enter #" << i+1 << " number: ";
        cin >> array[i];
    }
    cout << "The minimum number is: " << arrayMin(array, length) << endl;

    return 0;
}