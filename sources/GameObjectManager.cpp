//
// Created by Martin Moreira de Jesus on 13/10/2021.
// Helped by Pierre Teodoresco
//

#include "GameObjectManager.hpp"

void GameObjectManager::addObject(const std::shared_ptr<GameObject> &gameObject) {
    m_gameObjects.push_back(gameObject);
}

void GameObjectManager::update() {
    for (auto &gameObject : m_gameObjects) {
        if (gameObject->isActive()) {
            gameObject->update(m_gameObjects);
        } else {
            m_gameObjects.erase(std::find(m_gameObjects.begin(), m_gameObjects.end(), gameObject));
        }
    }
}

void GameObjectManager::render() const {
    for (const auto &gameObject : m_gameObjects) {
        if (gameObject->isActive()) {
            gameObject->render();
        }
    }
}
