#include "Move.h"
#include <string>
#include "Pirate.h"

Pirate::Pirate(){}

std::string Pirate::getName(){
    return "Pirate";
}

bool Pirate::isWinner(Move* opponent){
    std::string name = opponent->getName();
    
    if (name == "Robot" || name == "Monkey") {
        return true;
    }
        return false;
}
