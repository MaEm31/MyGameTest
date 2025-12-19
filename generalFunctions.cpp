#include "Character.h"

#include <iostream>
std::ostream &operator<<(std::ostream &os, Character character) {
    os << character.getName() << std::endl;
    os << "Health: (" << character.getHealth() << '/' << character.getMaxHealth() << ')'
       << "\nMana: (" << character.getMana() << '/' << character.getMaxMana() << ')' << std::endl;
    return os;
}