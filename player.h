#ifndef _PLAYER_H_
#define _PLAYER_H_
#include "Character.h"
#include <cmath>
class Player : public Character {
private:
  int xp;
  int maxXp;
public:
  Player(std::string name);
  ~Player() = default;
};

#endif
