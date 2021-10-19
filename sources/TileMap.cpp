//
// Created by Martin Moreira de Jesus on 17/10/2021.
//

#include "TileMap.hpp"

TileMap::TileMap(const unsigned &tileSize, const std::vector<std::vector<int>> &tileMap,
                 const std::shared_ptr<sf::RenderWindow> &gameWindow) : m_tileSize(tileSize) {
    m_tileMap.resize(tileMap.size());
    for (unsigned i = 0; i < tileMap.size(); ++i) {
        for (unsigned j = 0; j < tileMap[i].size(); ++j) {
            switch (tileMap[i][j]) {
                case 0:
                    m_tileMap[i].push_back(Tile(m_tileSize * i, m_tileSize * j,
                                                tileSize, sf::Color::Red, gameWindow));
                    break;
                case 1:
                    m_tileMap[i].push_back(Tile(m_tileSize * i, m_tileSize * j,
                                                tileSize, sf::Color::Black, gameWindow));
                    break;
            }
        }
    }
}

void TileMap::render() const {
    for (const auto &vTile: m_tileMap) {
        for (const auto &tile: vTile) {
            tile.render();
        }
    }
}