
#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"
#include <string>

class Player {
 public:
  Player();
  virtual Move* makeMove( ) = 0; 
  virtual std::string getName( ) = 0; 
};

#endif

 