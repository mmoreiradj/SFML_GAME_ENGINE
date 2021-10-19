//
// Created by Martin Moreira de Jesus on 13/10/2021.
// Helped by Pierre Teodoresco
//

#ifndef GAME_ENGINE_GAMEOBJECT_HPP
#define GAME_ENGINE_GAMEOBJECT_HPP

#include <vector>
#include <memory>

#include "BetterSprite.hpp"

class GameObject {
protected:
    BetterSprite m_sprite;
    bool m_active;
    inline static unsigned int m_static_id;
    const unsigned int m_id;
    std::shared_ptr<sf::RenderWindow> m_gameWindow;
    std::vector<std::shared_ptr<sf::Texture>> m_textures;
public:
    GameObject(const int &sizeX, const int &sizeY, const std::shared_ptr<sf::RenderWindow> &gameWindow,
               const sf::Color &color);

    virtual void update(const std::vector<std::shared_ptr<GameObject>> &gameObjects) = 0;

    virtual void render() const;

    bool isActive() const;

    void setIsActive(const bool &);

    bool collision(const std::shared_ptr<GameObject> &gameObject);

    unsigned int getId() const;

    BetterSprite getSprite() const;

    const std::vector<std::shared_ptr<sf::Texture>> &getMTextures() const;

    void setMTextures(const std::vector<std::shared_ptr<sf::Texture>> &mTextures);
};

#endif //GAME_ENGINE_GAMEOBJECT_HPP
