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
    inline static unsigned m_counter;
    const unsigned m_id;
public:
    GameObject(const int &sizeX, const int &sizeY, const sf::Color &color);
    virtual void update(const std::vector<std::shared_ptr<GameObject>> &gameObjects) = 0;
    virtual void render() const;
    bool isActive() const;
    void setIsActive(const bool &);
    bool collision(const std::shared_ptr<GameObject> &gameObject);
    unsigned int getId() const;
    BetterSprite getSprite() const;
};

#endif //GAME_ENGINE_GAMEOBJECT_HPP
