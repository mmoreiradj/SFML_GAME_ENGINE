//
// Created by Martin Moreira de Jesus on 17/10/2021.
//

#ifndef SFML_GAME_ENGINE_TILEMAP_H
#define SFML_GAME_ENGINE_TILEMAP_H

#include <vector>
#include <Tile.hpp>

class TileMap {
private:
    sf::Texture text0;
    sf::Texture text1;
    std::vector<std::vector<Tile>> m_tileMap;
    unsigned m_tileSize{};
public:
    TileMap() = default;

    TileMap(const unsigned &tileSize, const std::vector<std::vector<int>> &tileMap, const std::shared_ptr<sf::RenderWindow> &);

    void render() const;
};


#endif //SFML_GAME_ENGINE_TILEMAP_H