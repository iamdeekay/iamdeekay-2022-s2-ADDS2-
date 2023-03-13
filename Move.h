#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>

class Move {
public:
    Move();
    virtual std::string getName() = 0;
    virtual bool isWinner(Move* opponent) = 0;
};

#endif 
