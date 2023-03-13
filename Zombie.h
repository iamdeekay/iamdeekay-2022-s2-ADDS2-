#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"
#include <string>

class Zombie : public Move {
public:
    Zombie();
    std::string getName();
    bool isWinner(Move* opponent);
};

#endif // ROBOT_H
