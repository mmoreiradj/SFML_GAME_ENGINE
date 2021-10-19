//
// Created by Martin Moreira de Jesus on 17/10/2021.
//

#include "Tile.h"
#include "Game.hpp"

#include <utility>


Tile::Tile(const float &posX, const float &posY, const sf::Texture &texture): m_sprite(BetterSprite(texture)) {
    m_sprite.setPosition(posX, posY);
}

Tile::Tile(const float &posX, const float &posY, const unsigned int &size, const sf::Color &color)
        : m_sprite(BetterSprite(size, size, color)) {
    m_sprite.setPosition(posX, posY);
}

void Tile::render() const {
    Game::gameWindow.draw(m_sprite);
}
