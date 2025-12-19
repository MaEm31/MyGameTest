#ifndef _CHARACTER_H_
#define _CHARACTER_H_
#include <string>
class Character {
protected:
    std::string name;
    short level;
    int maxHealth;
    int health;
    int maxMana;
    int mana;
    int meleeDmg;
    int magicDmg;
    int positionX;
    int positionY;
public:
    Character(std::string name);
    ~Character() = default;
    short getLevel();
    std::string getName();
    int getMaxHealth();
    int getHealth();
    int getMaxMana();
    int getMana();
    void walk(char direction);
    //void attack();
    //void castFireball();
}; 

#endif