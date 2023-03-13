#include "Paper.h"
#include "Move.h"
#include <string>

Paper::Paper(){}

std::string Paper::getName(){
    return "Paper";
}
    
bool Paper::isWinner(Move* opponent){
    std::string name = opponent->getName();
        
    if (name == "Rock") {
        return true;
    }
    return false;
}
