//
// Created by Martin Moreira de Jesus on 13/10/2021.
// Helped by Pierre Teodoresco
//

#ifndef GAME_ENGINE_GAMEOBJECTMANAGER_HPP
#define GAME_ENGINE_GAMEOBJECTMANAGER_HPP

#include <memory>
#include <vector>

#include "GameObject.hpp"

class GameObjectManager {
private:
    std::vector<std::shared_ptr<GameObject>> m_gameObjects;
public:
    void addObject(const std::shared_ptr<GameObject> &gameObject);

    void update();

    void render() const;
};

#endif //GAME_ENGINE_GAMEOBJECTMANAGER_HPP
