#ifndef SCISSORS_H
#define SCISSORS_H
#include <string>
#include "Move.h"

class Scissors: public Move {
public:
    Scissors();
    std::string getName();
    bool isWinner(Move* opponent);
};

#endif // SCISSORS_H
