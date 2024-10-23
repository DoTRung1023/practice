#include <iostream>
#include <utility>
#include <tuple>
#include <string>
#include "GameEntity.hpp"
#include "Utils.hpp"
#include "Effect.hpp"
#include "Explosion.hpp"
#include "Ship.hpp"
#include "Mine.hpp"

using namespace std;

int main(){
    // tuple<int, int> pos1 = Utils::generateRandomPos(100, 100);
    // tuple<int, int> pos2 = Utils::generateRandomPos(100, 100);
    // tuple<int, int> pos3 = Utils::generateRandomPos(100, 100);
    // GameEntity* ship = new Ship(get<0>(pos1), get<1>(pos1));
    // GameEntity* mine = new Mine(get<0>(pos2), get<1>(pos2));
    // GameEntity* explosion = new Explosion(get<0>(pos3), get<1>(pos3));

    // ship = static_cast<Ship*>(ship);
    // mine = static_cast<Mine*>(mine);
    // explosion = static_cast<Explosion*>(explosion);

    Ship ship(30, 50);
    Mine mine(40, 60);

    cout << "Ship:" << endl;
    tuple<int, int> pos1 = ship.getPos();
    cout << "pos1: " << get<0>(pos1) << ", " << get<1>(pos1) << endl;
    ship.move(10, -20);
    tuple<int, int> pos2 = ship.getPos();
    cout << "pos2: " << get<0>(pos2) << ", " << get<1>(pos2) << endl;

    tuple<int, int> pos3 = mine.getPos();
    cout << "Mine:" << endl;
    cout << "pos1: " << get<0>(pos3) << ", " << get<1>(pos3) << endl;
    cout << "type: " << mine.getType() << endl;
    Explosion explode = mine.explode();
    explode.apply(mine);
    tuple<int, int> pos4 = mine.getPos();
    cout << "pos2: " << get<0>(pos4) << ", " << get<1>(pos4) << endl;
    cout << "type: " << mine.getType() << endl;
    return 0;
}