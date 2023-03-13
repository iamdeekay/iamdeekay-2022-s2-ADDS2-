#include "Human.h"
#include "Player.h"
#include "Move.h"
#include "Robot.h"
#include "Rock.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Paper.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Monkey.h"
#include <iostream>

Human::Human(){name = "Human";}

Human::Human(std::string newName){
    name = newName;
}

std::string Human::getName(){
    return name;
}

Move * Human::makeMove(){
    std::string newMove;
    std::cout << "Enter move: ";
    std::cin >> newMove;

    if(newMove == "Rock"){
        move = new Rock();
    } else if(newMove == "Paper"){
        move = new Paper();
    } else if(newMove == "Scissors"){
        move = new Scissors();
    } else if(newMove == "Robot"){
        move = new Robot();
    } else if(newMove == "Monkey"){
        move = new Monkey();
    } else if(newMove == "Zombie"){
        move = new Zombie();
    } else if(newMove == "Pirate"){
        move = new Pirate();
    } else if(newMove == "Ninja"){
        move = new Ninja();
    }

    return move;
}