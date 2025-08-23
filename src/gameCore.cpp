#include "gameCore.hpp"
#include "cellularAutomata.hpp"
#include "raylib.h"

gameCore::gameCore(std::string gameName, int widthResolution, int heightResolution, int FPS){
    m_gameName = gameName;
    m_width = widthResolution;
    m_height = heightResolution;
    m_FPS = FPS;
}


void gameCore::StartGame()
{
    cellularAutomata test(50);
    int size = test.m_grid.size();
    InitWindow(m_width, m_height, m_gameName.c_str()); 
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("HOLA MIAMOR T AMO", 500,500,50,RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
}