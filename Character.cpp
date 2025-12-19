#include "Character.h"
#include <iostream>
#include "generalFunctions.h"
//overloaded constructor
Character::Character(std::string name) 
    : name {name}, level {1}, maxHealth {100}, health {100}, 
    maxMana {100}, mana {100}, meleeDmg {5}, magicDmg {10} { 
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
void Character::takeDamage(int damage) {
    health -= damage;
    std::cout << name << " has taken " << damage << " points of damage." << std::endl;
    if (health == 0) {
        health = 0;
        std::cout << name << " has died." << std::endl;
    } else 
        std::cout << *this; //display the character after to see remaining health and mana
}
//attack method
void Character::attack(Character &target) {
    target.takeDamage(meleeDmg);
    std::cout << name << " attacks " << target.getName() << std::endl;
}
/* walk method
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
 */
