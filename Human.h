#ifndef HUMAN_H
#define HUMAN_H

#include "Move.h"
#include "Player.h"
#include <string>

class Human: public Player{
    std::string name;
    Move* move;
    public:
    Human();
    Human(std::string name);
    std::string getName();
    Move* makeMove();
};

#endif