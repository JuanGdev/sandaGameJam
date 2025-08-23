#include "gameCore.hpp"
#include "raylib.h"

gameCore::gameCore(std::string gameName, int widthResolution, int heightResolution, int FPS){
    m_gameName = gameName;
    m_width = widthResolution;
    m_height = heightResolution;
    m_FPS = FPS;
}

void gameCore::StartGame()
{
    InitWindow(m_width, m_height, m_gameName.c_str());
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
}