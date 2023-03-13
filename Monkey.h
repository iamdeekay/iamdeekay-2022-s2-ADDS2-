#ifndef MONKEY_H
#define MONKEY_H
#include <string>
#include "Move.h"

class Monkey : public Move{
public:
    Monkey();
    std::string getName();
    bool isWinner(Move* opponent);
};

#endif /* MONKEY_H */

