#ifndef CELLULARAUTOMATA_HPP
#define CELLULARAUTOMATA_HPP

#include <vector>
#include <bitset>

class cellularAutomata{
    public:
    int m_gridSize; //  nxn 2D Array
    std::vector<std::vector<bool>> m_grid;
    cellularAutomata(int m_gridSize);
    void ApplyRules();
    
    private:
};
#endif