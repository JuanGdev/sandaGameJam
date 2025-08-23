#ifndef CELLULARAUTOMATA_HPP
#define CELLULARAUTOMATA_HPP

#include <vector>

class cellularAutomata{
    public:
    int m_gridSize; //  nxn 2D Array
    std::vector<std::vector<int>> m_grid;
    int m_cellSize;
    cellularAutomata(int m_gridSize);
    private:
    void DrawCells(int width);
};
#endif