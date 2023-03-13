#include "Robot.h"
#include <string>

std::string Robot::getName(){
    return "Robot";
}

Robot::Robot(){}

bool Robot::isWinner(Move* opponent){
    std::string name = opponent->getName();
    if (name == "Ninja" || name == "Zombie") {
        return true;
    }
    return false;
}
