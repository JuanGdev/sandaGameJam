#include "cellularAutomata.hpp"

cellularAutomata::cellularAutomata(int gridSize){
    m_gridSize = gridSize;
    m_grid = std::vector<std::vector<int>>(m_gridSize, std::vector<int>(m_gridSize,0));
}