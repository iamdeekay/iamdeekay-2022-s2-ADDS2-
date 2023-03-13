#ifndef NINJA_H
#define NINJA_H

#include "Move.h"
#include <string>

class Ninja: public Move {
public:
    Ninja();
    std::string getName();
    bool isWinner(Move* opponent);
};

#endif // NINJA_H
