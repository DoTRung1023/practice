#include <iostream>
#include <utility>
#include <tuple>
#include <string>
#include "GameEntity.hpp"
#include "Utils.hpp"
#include "Effect.hpp"

using namespace std;

int main(){
    tuple<int, int> pos1 = Utils::generateRandomPos(100, 100);
    tuple<int, int> pos2 = Utils::generateRandomPos(100, 100);

    double distance = Utils::calculateDistance(pos1, pos2);

    cout << "pos1: " << get<0>(pos1) << ", " << get<1>(pos1) << endl;
    cout << "pos2: " << get<0>(pos2) << ", " << get<1>(pos2) << endl;
    cout << "distance: " << distance << endl;

    return 0;
}