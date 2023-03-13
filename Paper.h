#ifndef PAPER_H
#define PAPER_H
#include<string>

#include "Move.h"

class Paper: public Move{
public:
    Paper();
    std::string getName();
    bool isWinner(Move* opponent);
};

#endif // PAPER_H
