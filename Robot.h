#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"
#include <string>

class Robot: public Move {
public:
    Robot();
    std::string getName();
    bool isWinner(Move* opponent);
};

#endif // ROBOT_H
