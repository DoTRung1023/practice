#ifndef __SHIP_H
#define __SHIP_H

#include <iostream>
#include <tuple>
#include <utility>
#include "GameEntity.hpp"

using namespace std;

class Ship: public GameEntity
{
public:
    Ship(int x, int y):GameEntity(x, y, 'S'){}
    void move(int dx, int dy){
        int x = get<0>(position) + dx;
        int y = get<1>(position) + dy;
        position = make_tuple(x, y);
    }
};

#endif