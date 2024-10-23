#ifndef __EFFECT_H
#define __EFFECT_H

#include <iostream>
#include <tuple>
#include <utility>
#include "GameEntity.hpp"

using namespace std;

class Effect
{
public:
    virtual void apply(GameEntity& entity) = 0;
};

#endif