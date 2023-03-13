#include "Rock.h"
#include "Move.h"
#include <string>

Rock::Rock(){
}

std::string Rock::getName(){
    return "Rock";
}    

bool Rock::isWinner(Move* opponent){
    std::string name = opponent->getName();
        
    if (name == "Scissors") {
        return true;
    }
    return false;
}
