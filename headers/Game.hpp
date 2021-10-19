//
// Created by Martin Moreira de Jesus on 13/10/2021.
// Helped by Pierre Teodoresco
//

#ifndef CHESS_CPP_GAME_HPP
#define CHESS_CPP_GAME_HPP

#include <SFML/Graphics.hpp>
#include <memory>

#include "GameObjectManager.hpp"
#include "TileMap.h"

class Game {
public:
    inline static sf::RenderWindow gameWindow;
    inline static TileMap tileMap;
private:
    sf::Event m_event{};
    GameObjectManager m_gameObjectManager;
public:
    Game(int width, int height, const std::string &name);
    void execute();
    void manageEvents() const;
    void update();
    void render();
};

#endif //CHESS_CPP_GAME_HPP