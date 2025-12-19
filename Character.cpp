#include "Character.h"
#include <iostream>
//overloaded constructor
Character::Character(std::string name) 
    : name {name}, level {1}, maxHealth {100}, 
    health {100}, maxMana {100}, mana {100}, meleeDmg {5}, magicDmg {10},
    positionX {0}, positionY {0} { 
}
//getters
std::string Character::getName() {
    return name;
}
short Character::getLevel() {
    return level;
}
int Character::getMaxHealth() {
    return maxHealth;
}
int Character::getHealth() {
    return health;
}
int Character::getMaxMana() {
    return maxMana;
}
int Character::getMana() {
    return mana;
}
//stream insertion operator

// walk method
void Character::walk(char direction) {
    switch (direction)
    {
    case 'D':
        positionX++;
        break;
    case 'A':
        if (positionX != 0)
            positionX--;
        break;
    default:
        break;
    }
}

