#ifndef _PLAYER_H_
#define _PLAYER_H_

class Player : public Character {
private:
  int maxXp;
  int xp;
public:
  Player();
  ~Player();
}

#endif
