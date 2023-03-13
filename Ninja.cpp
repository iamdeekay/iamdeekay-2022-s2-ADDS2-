#include "Ninja.h"
#include "Move.h"
#include <string>

Ninja::Ninja(){}

std::string Ninja::getName(){
    return "Ninja";
}

bool Ninja::isWinner (Move* opponent){
    std::string name = opponent->getName();

    if (name == "Pirate" || name == "Zombie") {
        return true;  // Ninja wins
    }
    return false; // Ninja loses
}

