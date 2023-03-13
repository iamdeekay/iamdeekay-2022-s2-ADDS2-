#include "Computer.h"
#include "Move.h"
#include "Rock.h"
using namespace std;

Computer::Computer(){ }

Move* Computer::makeMove() {
    Move* move = new Rock();
    return move;  
}

string Computer::getName() {
    return "Computer";
}
