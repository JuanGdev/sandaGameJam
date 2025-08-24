#include "cellularAutomata.hpp"

cellularAutomata::cellularAutomata(int gridSize){
    m_gridSize = gridSize;
    m_grid = std::vector<std::vector<bool>>(m_gridSize, std::vector<bool>(m_gridSize,0));
}