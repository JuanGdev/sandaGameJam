#include "cellularAutomata.hpp"

cellularAutomata::cellularAutomata(int gridSize){
    m_gridSize = gridSize;
    m_grid = std::vector<std::vector<bool>>(m_gridSize, std::vector<bool>(m_gridSize,0));
}

void cellularAutomata::ApplyRules()
{
    std::bitset<3> pattern;
    unsigned long patternValue = 0;

    for(int i = 0; i+1 < m_gridSize; i+=1)
    {
        for(int j = 1; j < m_gridSize; j+=1)
        {
            pattern[0] = m_grid[i][j+1];    //  celda izquierda
            pattern[1] = m_grid[i][j];      //  celda central
            pattern[2] = m_grid[i][j-1];    //  celda derecha
            patternValue = pattern.to_ulong();
            switch (patternValue)
            {
            case 0: //  000
                m_grid[i+1][j] = 0;
                break;
            case 1: case 2: case 3: case 4: //  001 010 011 100
                m_grid[i+1][j] = 1;
                pattern = std::bitset<3>("010");
                break;
            case 5: case 6: case 7: //  101 110 111
                m_grid[i+1][j] = 0;
                break;
            default:
                pattern = std::bitset<3>("111");
                break;
            }
        }
    }
}