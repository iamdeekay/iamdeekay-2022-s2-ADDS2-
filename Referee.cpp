#include "Player.h"
#include "Move.h"
#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if(move1->isWinner(move2)){
        return player1;
    } else if(move2->isWinner(move1)){
        return player2;
    }
    return nullptr;
}