#ifndef _PLAYER_H_
#define _PLAYER_H_
#include "Character.h"
class Player : public Character {
private:
  int maxXp;
  int xp;
public:
  Player();
  ~Player();
}

#endif
