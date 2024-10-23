#ifndef __GAMEENTITY_H
#define __GAMEENTITY_H

#include <iostream>
#include <tuple>
#include <utility>

using namespace std;

enum GameEntityType
{
    ExplosionType, 
    MineType, 
    NoneType, 
    ShipType
};

class GameEntity
{
protected:
    std::tuple<int, int> position;
    GameEntityType type;
public:
    GameEntity(int x, int y, char type){
        position = make_tuple(x, y);
        switch(type){
            case 'E':
                this->type = ExplosionType;
                break;
            case 'M':
                this->type = MineType;
                break;
            case 'N':
                this->type = NoneType;
                break;
            case 'S':
                this->type = ShipType;
                break;
            default:
                cout << "Undefined type" << endl;
                break;
        }
    }
    std::tuple<int, int> getPos(){
        return position;
    }
    GameEntityType getType(){
        return type;
    }
};

#endif