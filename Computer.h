#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include "Move.h"
#include <string>


class Computer: public Player{
private:
    std::string name;
    Move* move;
public:
    Computer();
    Move* makeMove();
    std::string getName();
};

#endif 
