#ifndef __GAME_H
#define __GAME_H

#include <iostream>
#include <tuple>
#include <utility>
#include <vector>
#include "GameEntity.hpp"
#include "Explosion.hpp"
#include "Ship.hpp"
#include "Mine.hpp"
#include "Utils.hpp"

using namespace std;

class Game
{
private:
    std::vector<GameEntity*> entities;
public:
    vector<GameEntity*> get_entities(){
        return entities;
    }
    void set_entities(std::vector<GameEntity*> entities){
        this->entities = entities;
    }
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
        for(int i = 0; i<numShips; i++){
            tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            int rand_x = get<0>(pos);
            int rand_y = get<1>(pos);
            GameEntity* ship = new Ship(rand_x, rand_y);
            entities.push_back(ship);
        }
        for(int i = 0; i<numMines; i++){
            tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            int rand_x = get<0>(pos);
            int rand_y = get<1>(pos);
            GameEntity* mine = new Mine(rand_x, rand_y);
            entities.push_back(mine);
        }
        return entities;
    }
    void gameLoop(int maxIterations, double mineDistanceThreshold){
        for(int i = 0; i<maxIterations; i++){
            int ship_count = 0;
            for(int i = 0; i<entities.size(); i++){
                if(entities[i]->getType() == GameEntityType::ShipType){
                    Ship* ship = static_cast<Ship*>(entities[i]);
                    ship->move(1, 0);
                    ship_count++;
                }
            }
            if(ship_count == 0){
                break;
            }
            for(auto& mine:entities){
                if(mine->getType() == GameEntityType::MineType){
                    for(auto& ship:entities){
                        if(ship->getType() == GameEntityType::ShipType){
                            if(Utils::calculateDistance(mine->getPos(), ship->getPos()) <= mineDistanceThreshold){
                                Mine* currentMine = static_cast<Mine*>(mine);
                                Explosion explosion = currentMine->explode();
                                explosion.apply(*ship);
                            }
                        }
                    }  
                }
            }
        }
    }
};

#endif