#ifndef GAMECORE_HPP
#define GAMECORE_HPP

#include <string>
#include "raylib.h"

class gameCore{
    public:
    gameCore(std::string gameName, int widthResolution, int heightResolution, int FPS);
    void StartGame();
    std::string m_gameName = "";
    int m_width = 1080;
    int m_height = 1920;
    int m_FPS;

    private:


};

#endif
