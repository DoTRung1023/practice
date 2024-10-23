#ifndef __UTILS_H
#define __UTILS_H

#include <iostream>
#include <tuple>
#include <utility>
#include <random>
#include <time.h>
#include <cmath>

using namespace std;

class Utils
{
public:
    static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
        std::srand(std::time(0));
        int x = rand()%gridWidth;
        int y = rand()%gridHeight;
        return make_tuple(x, y);
    }
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
        int x1 = get<0>(pos1);
        int y1 = get<1>(pos1);
        int x2 = get<0>(pos2);
        int y2 = get<1>(pos2);
        return sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
    }
};

#endif