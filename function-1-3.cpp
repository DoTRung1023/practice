#include <iostream>

using namespace std;

double* duplicateArray(double* array, int size) {
    double* new_array = new double;
    // 1 error
    // new_array = array;

    // 2
    for (int i = 0; i<size; i++) {
        new_array[i] = array[i];
    }
    // 3
    // for (int i = 0; i<size; i++) {
    //     *(new_array+i) = array[i];
    // }

    return new_array;
}