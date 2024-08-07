#include <iostream>

using namespace std;

double arrayMin(double* array, int length) {
    double min = array[0];

    for (int i = 1; i<length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}