#include <memory>

#include "Game.hpp"
#include "Monster.hpp"

Game::Game(int width, int height, const std::string &name) {
    Game::gameWindow.create(sf::VideoMode(width, height), name);
    Game::gameWindow.setFramerateLimit(30);
    Game::gameWindow.setVerticalSyncEnabled(true);
    Game::gameWindow.setKeyRepeatEnabled(false);
    m_gameObjectManager.addObject(std::make_shared<Monster>(100, 100));
}

void Game::execute() {
    while (Game::gameWindow.isOpen()) {
        while (Game::gameWindow.pollEvent(m_event)) {
            manageEvents();
        }
        update();
        render();
    }
}

void Game::manageEvents() const {
    if (m_event.type == sf::Event::Closed) {
        Game::gameWindow.close();
    }
}

void Game::update() {
    m_gameObjectManager.update();
}

void Game::render() {
    Game::gameWindow.clear(sf::Color::White);
    Game::gameWindow.display();
    m_gameObjectManager.render();
}