#ifndef __MINE_H
#define __MINE_H

#include <iostream>
#include <tuple>
#include <utility>
#include "GameEntity.hpp"
#include "Explosion.hpp"

using namespace std;

class Mine: public GameEntity
{
public:
    Mine(int x, int y):GameEntity(x, y, 'M'){}
    Explosion explode(){
        type = GameEntityType::NoneType;
        int dx = get<0>(position);
        int dy = get<1>(position);
        Explosion explode(dx, dy);
        return explode;
    }
};

#endif