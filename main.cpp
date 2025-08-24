#include "gameCore.hpp"

int main(void){
    gameCore myGame("Celullar Automatas", 1000, 1000, 60);
    cellularAutomata myCellObject(50);
    myGame.StartGame(myCellObject);
    return 0;
}