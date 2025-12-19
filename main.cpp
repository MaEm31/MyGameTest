#include <iostream>
#include "Character.h"
#include "Player.h"
#include "generalFunctions.h"
int main() {
    Player player {"Garthuar"};
    std::cout << player;

    Character goblin {"Goblin"};
    std::cout << goblin;

    player.attack(goblin);

}

// next step: define & implement an enemy class
