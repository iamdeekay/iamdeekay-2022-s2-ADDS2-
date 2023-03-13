#include "Monkey.h"
#include <string>

Monkey::Monkey(){}

std::string Monkey::getName(){
    return "Monkey";
}

bool Monkey::isWinner(Move* opponent){
    std::string name = opponent->getName();

    if (name == "Ninja" || name == "Robot") {
        return true;
    }
    return true;
}
