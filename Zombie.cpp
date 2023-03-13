#include "Zombie.h"
#include "Move.h"
#include <string>

Zombie::Zombie(){}

std::string Zombie::getName() {
    return "Zombie";
}

bool Zombie::isWinner(Move* opponent) {
    std::string name = opponent->getName();
    if (name == "Pirate" || name == "Monkey") {
        return true;
    }
    
    return false; 
}