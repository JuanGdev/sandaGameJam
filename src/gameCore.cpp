#include "gameCore.hpp"
#include <iostream>

gameCore::gameCore(std::string gameName, int widthResolution, int heightResolution, int FPS)
{
    m_gameName = gameName;
    m_width = widthResolution;
    m_height = heightResolution;
    m_FPS = FPS;
}

void gameCore::StartGame(cellularAutomata& cellObject)
{
    InitWindow(m_width, m_height, m_gameName.c_str()); 
    Vector2 mousePosition = {0.f,0.f};

    //  Update method for the game
    while(!WindowShouldClose())
    {

        if (IsKeyPressed(KEY_H))
        {
            if (IsCursorHidden())
            {
                ShowCursor();
            }
            else
            {
                HideCursor();
            }
        }
        if(IsMouseButtonDown(MOUSE_LEFT_BUTTON))
        {
            cellsUpdated = MouseClick(cellObject);
            if(cellsUpdated.x != 0)
            {
                cellObject.m_grid[cellsUpdated.y][cellsUpdated.x] = !cellObject.m_grid[cellsUpdated.y][cellsUpdated.x];
            }
            std::cout << MouseClick(cellObject).x << MouseClick(cellObject).y << std::endl;
        }
        BeginDrawing();
        ClearBackground(BLACK); //  Basic background color
        cellObject.ApplyRules();
        DrawCells(cellObject);

        //  mouse ball
        mousePosition = GetMousePosition();
        DrawCircleGradient(mousePosition.x, mousePosition.y, 10.f, RED, RAYWHITE);
        DrawFPS(10,10);
        EndDrawing();
    }
    CloseWindow();
}

void gameCore::DebugDrawGridLines(cellularAutomata& cellObject)
{
    Vector2 verticalLineStart{0.f,0.f};
    Vector2 verticalLineEnd{0.f, static_cast<float>(m_width)};
    Vector2 horizontalLineStart{0.f,0.f};
    Vector2 horizontalLineEnd{static_cast<float>(m_width),0.f};

    //take the original screen size and divide it by grid size (cells)
    int cellsStepDivision = m_width/cellObject.m_gridSize;
    for(int i = 0; i <= cellObject.m_gridSize; i+=1)
    {
        //  Horizontal line
        DrawLineEx(horizontalLineStart, horizontalLineEnd, m_DebugLinesThick, m_DebugLinesColor);
        horizontalLineStart.y += cellsStepDivision;
        horizontalLineEnd.y += cellsStepDivision;
        //  Vertical line
        DrawLineEx(verticalLineStart,verticalLineEnd,m_DebugLinesThick, m_DebugLinesColor);
        verticalLineStart.x += cellsStepDivision;
        verticalLineEnd.x += cellsStepDivision;
    }
}

void gameCore::DrawCells(cellularAutomata& cellObject)
{
    float cellsStepDivision = m_width/cellObject.m_gridSize;
    Vector2 cellOrigin{0.f,0.f};
    for(int i = 0; i < cellObject.m_gridSize; i+=1)
    {
        cellOrigin.y = cellsStepDivision*i;
        for(int j = 0; j < cellObject.m_gridSize; j+=1)
        {
            cellOrigin.x = cellsStepDivision*j;
            if(cellObject.m_grid[i][j])
            {
                DrawRectangle(cellOrigin.x,cellOrigin.y,cellsStepDivision,cellsStepDivision, RAYWHITE);
            }
        }
    }
}

Vector2 gameCore::MouseClick(cellularAutomata& cellObject)
{
    int cellSize = m_height/cellObject.m_gridSize;

    Vector2 mousePos = GetMousePosition();
    Vector2 renCols{0.f,0.f};
    if(mousePos.y <= cellSize)
    {
        renCols.x = static_cast<int>(mousePos.x/cellObject.m_gridSize);
        renCols.y = static_cast<int>(mousePos.y/cellObject.m_gridSize);
    }
    return renCols;
}
    void ModifyCell(cellularAutomata& cellObject);
    void DrawCell(const int ren, const int col);