//
// Created by Martin Moreira de Jesus on 13/10/2021.
// Helped by Pierre Teodoresco
//

#include <memory>

#include "GameObject.hpp"

GameObject::GameObject(const int &sizeX, const int &sizeY, const std::shared_ptr<sf::RenderWindow> &gameWindow, const sf::Color &color)
        : m_sprite(BetterSprite(sizeY, sizeY, color)), m_gameWindow(gameWindow), m_id(++GameObject::m_static_id), m_active(true) {
    GameObject::m_static_id = 0;
}

void GameObject::render() const {
    m_gameWindow->draw(m_sprite);
}

bool GameObject::isActive() const {
    return m_active;
}

void GameObject::setIsActive(const bool &active) {
    m_active = active;
}

bool GameObject::collision(const std::shared_ptr<GameObject> &gameObject) {
    return m_sprite.getLeft() < gameObject->getSprite().getRight() &&
            m_sprite.getRight() > gameObject->getSprite().getLeft() &&
            m_sprite.getTop() < gameObject->getSprite().getBot() &&
            m_sprite.getBot() > gameObject->getSprite().getTop();
}

unsigned int GameObject::getId() const {
    return m_id;
}

BetterSprite GameObject::getSprite() const {
    return m_sprite;
}

const std::vector<std::shared_ptr<sf::Texture>> &GameObject::getMTextures() const {
    return m_textures;
}

void GameObject::setMTextures(const std::vector<std::shared_ptr<sf::Texture>> &mTextures) {
    m_textures = mTextures;
}
