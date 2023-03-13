#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"
#include <string>

class Pirate: public Move{
public:
    Pirate();
    std::string getName();
    bool isWinner(Move* opponent);
};

#endif
