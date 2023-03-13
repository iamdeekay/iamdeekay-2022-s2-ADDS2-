#include "Computer.h"
#include "Move.h"
#include "Rock.h"
using namespace std;

Computer::Computer(){name = "Computer";}

Move* Computer::makeMove() {
    move = new Rock();
    return move;  
}

string Computer::getName() {
    return name;
}
