#ifndef GAMECORE_HPP
#define GAMECORE_HPP

#include <string>
#include "raylib.h"
#include "cellularAutomata.hpp"

class gameCore{
    public:
    gameCore(std::string gameName, int widthResolution, int heightResolution, int FPS);
    void StartGame(cellularAutomata& cellObject);
    std::string m_gameName = "";
    int m_width = 1080;
    int m_height = 1080;
    int m_FPS;

    float m_DebugLinesThick = 5.f;
    Color m_DebugLinesColor = YELLOW;

    private:
    void DebugDrawGridLines(cellularAutomata & cellObject);

};

#endif
