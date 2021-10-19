//
// Created by Martin Moreira de Jesus on 13/10/2021.
// Helped by Pierre Teodoresco
//

#ifndef GAME_ENGINE_MONSTER_HPP
#define GAME_ENGINE_MONSTER_HPP

#include <memory>

#include "GameObject.hpp"

class Monster : public GameObject {
public:
    Monster(const int &xPos, const int &yPos);
    void update(const std::vector<std::shared_ptr<GameObject>> &gameObjects) override;
};

#endif //GAME_ENGINE_MONSTER_HPP
