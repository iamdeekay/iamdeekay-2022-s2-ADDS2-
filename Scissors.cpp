#include "Scissors.h"
#include "Move.h"
#include <string>

Scissors::Scissors(){}

std::string Scissors::getName(){
        return "Scissors";
}
    
bool Scissors::isWinner(Move* opponent){
    std::string name = opponent->getName();
        
    if (name == "Paper") {
        return true;
    } 
    return false;
}
