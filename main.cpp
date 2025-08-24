#include "gameCore.hpp"

int main(void){
    gameCore myGame("Celullar Automatas", 1000, 1000, 60);
    cellularAutomata myCellObject(3);
    myCellObject.m_grid[1][1] = 1;
    myGame.StartGame(myCellObject);

    return 0;
}