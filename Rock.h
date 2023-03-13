#ifndef ROCK_H
#define ROCK_H
#include <string>
#include "Move.h"

class Rock: public Move{
public:
    Rock();
    std::string getName();
    bool isWinner(Move* opponent);
};

#endif
