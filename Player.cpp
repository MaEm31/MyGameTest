#include "Player.h"
#include <iostream>

Player::Player(std::string name) 
    : Character(name), xp {0}, maxXp {250} {
} 