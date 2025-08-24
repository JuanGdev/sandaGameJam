#ifndef CELLULARAUTOMATA_HPP
#define CELLULARAUTOMATA_HPP

#include <vector>

class cellularAutomata{
    public:
    int m_gridSize; //  nxn 2D Array
    std::vector<std::vector<int>> m_grid;
    cellularAutomata(int m_gridSize);
    private:
};
#endif