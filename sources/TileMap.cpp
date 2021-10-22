//
// Created by Martin Moreira de Jesus on 17/10/2021.
//

#include <fstream>
#include <iostream>
#include "TileMap.hpp"

TileMap::TileMap(const unsigned &tileSize, const std::string &filename,
                 const std::shared_ptr<sf::RenderWindow> &gameWindow) : m_tileSize(tileSize) {
    std::ifstream ifs(filename);
    std::vector<std::vector<int>> map(1);
    if (ifs) {
        int i = 0;
        while (!ifs.eof()) {
            char c = ifs.get();
            if (c == ' ') {
                continue;
            }
            else if (c == '\n') {
                map.resize(map.size() + 1);
                ++i;
                continue;
            }
            map[i].push_back(int(c - '0'));
        }
    }
    else {
        std::cerr << "ERROR !\n";
    }


    for (unsigned i = 0; i < map.size(); ++i) {
        for (unsigned j = 0; j < map[i].size(); ++j) {
            switch (map[i][j]) {
                case 0:
                    m_tileMap[i].push_back(Tile(float(m_tileSize * i), float(m_tileSize * j),
                                                tileSize, sf::Color::Red, gameWindow));
                    break;
                case 1:
                    m_tileMap[i].push_back(Tile(float(m_tileSize * i), float(m_tileSize * j),
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