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
#include "Referee.h"
#include "Computer.h"
#include <iostream>

int main(){
    Player* human = new Human();
    Player* computer = new Computer();
    Referee* ref;
    Player* win = ref->refGame(human, computer);
    std::cout << win->getName() << std::endl; 
}