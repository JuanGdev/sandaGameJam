#include "gameCore.hpp"

int main(void){
    gameCore myGame("Celullar Automatas", 1020, 520, 1);
    cellularAutomata myCellObject(31);
    myCellObject.m_grid[0][15] = 1;
    myGame.StartGame(myCellObject);

    return 0;
}