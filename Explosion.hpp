#ifndef __EXPLOSION_H
#define __EXPLOSION_H

#include <iostream>
#include <tuple>
#include <utility>
#include "GameEntity.hpp"
#include "Effect.hpp"

using namespace std;

class Explosion : public GameEntity, public Effect
{
public:
    Explosion(int x, int y):GameEntity(x, y, 'E'){}
    void apply(GameEntity& entity){
        entity = GameEntity(-1, -1, 'N');
    }
};

#endif