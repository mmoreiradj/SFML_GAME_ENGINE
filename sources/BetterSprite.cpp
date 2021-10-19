//
// Created by Martin Moreira de Jesus on 13/10/2021.
// Helped by Pierre Teodoresco
//

#include "BetterSprite.hpp"

BetterSprite::BetterSprite(const unsigned int &width, const unsigned int &height, const sf::Color &color) {
    sf::Texture text;
    text.create(width, height);
    setTexture(text);
    setColor(color);
}

BetterSprite::BetterSprite(const sf::Texture &texture) {
    this->setTexture(texture);
}

float BetterSprite::getRight() const {
    return getPosition().x + float(getTextureRect().width);
}

float BetterSprite::getLeft() const {
    return getPosition().x;
}

float BetterSprite::getTop() const {
    return getPosition().y;
}

float BetterSprite::getBot() const {
    return getPosition().y + float(getTextureRect().height);
}

unsigned int BetterSprite::getWidth() const {
    return getTextureRect().width;
}

unsigned int BetterSprite::getHeight() const {
    return getTextureRect().height;
}
