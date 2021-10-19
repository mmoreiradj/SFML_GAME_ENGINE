//
// Created by Martin Moreira de Jesus on 13/10/2021.
// Helped by Pierre Teodoresco
//

#ifndef GAME_ENGINE_BETTERSPRITE_HPP
#define GAME_ENGINE_BETTERSPRITE_HPP

#include "SFML/Graphics.hpp"

class BetterSprite : public sf::Sprite {
public:
    BetterSprite(const unsigned int &width, const unsigned int &height, const sf::Color &color);

    explicit BetterSprite(const sf::Texture &texture);

    float getRight() const;

    float getLeft() const;

    float getTop() const;

    float getBot() const;

    unsigned int getWidth() const;

    unsigned int getHeight() const;
};

#endif //GAME_ENGINE_BETTERSPRITE_HPP
