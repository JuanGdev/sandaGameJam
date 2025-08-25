#include "gameCore.hpp"

int main(void){
    gameCore myGame("Celullar Automatas", 1000, 1000, 60);
    cellularAutomata myCellObject(30);
    myCellObject.m_grid[0][15] = 1;
    myGame.StartGame(myCellObject);

    return 0;
}