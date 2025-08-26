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
    int m_FPS = 60;

    float m_DebugLinesThick = 5.f;
    Color m_DebugLinesColor = RAYWHITE;

    private:
    void DrawCells(cellularAutomata& cellObject);

    void DebugDrawGridLines(cellularAutomata& cellObject);

    void ApplyRules(cellularAutomata& cellObject);

};

#endif
