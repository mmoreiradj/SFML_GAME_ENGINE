//
// Created by Martin Moreira de Jesus on 13/10/2021.
// Helped by Pierre Teodoresco
//

#include <memory>

#include "Monster.hpp"



Monster::Monster(const int &xPos, const int &yPos): GameObject(100, 100, sf::Color::Red) {
    getSprite().setPosition(float(xPos), float(yPos));
}

void Monster::update(const std::vector<std::shared_ptr<GameObject>> &gameObjects) {

}
