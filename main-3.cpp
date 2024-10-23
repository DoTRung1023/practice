#include <iostream>
#include <tuple>
#include <utility>
#include <vector>
#include "GameEntity.hpp"
#include "Explosion.hpp"
#include "Ship.hpp"
#include "Mine.hpp"
#include "Utils.hpp"
#include "Game.hpp"

using namespace std;

int main(){
    Game newGame;
    std::vector<GameEntity*> entities = newGame.initGame(10, 10, 100, 100);
    newGame.gameLoop(20, 10);

    return 0;
}