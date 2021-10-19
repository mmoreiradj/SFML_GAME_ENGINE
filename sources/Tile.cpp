//
// Created by Martin Moreira de Jesus on 17/10/2021.
//

#include "Tile.h"

#include <utility>


Tile::Tile(const float &posX, const float &posY, const sf::Texture &texture,
           std::shared_ptr<sf::RenderWindow> gameWindow): m_sprite(BetterSprite(texture)),
                                                          m_gameWindow(std::move(gameWindow)) {
    m_sprite.setPosition(posX, posY);
}

Tile::Tile(const float &posX, const float &posY, const unsigned int &size, const sf::Color &color,
           std::shared_ptr<sf::RenderWindow> gameWindow) : m_sprite(BetterSprite(size, size, color)),
                                                           m_gameWindow(std::move(gameWindow)) {
    m_sprite.setPosition(posX, posY);
}

void Tile::render() const {
    m_gameWindow->draw(m_sprite);
}
