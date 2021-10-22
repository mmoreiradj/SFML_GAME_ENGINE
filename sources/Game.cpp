#include <memory>
#include <fstream>
#include <iostream>

#include "Game.hpp"

Game::Game(int width, int height, const std::string &name) {
    m_gameWindow = std::make_shared<sf::RenderWindow>(sf::VideoMode(width, height), name);
    m_gameWindow->setFramerateLimit(30);
    m_gameWindow->setKeyRepeatEnabled(false);
    m_tileMap = TileMap(100, "../assets/TileMap_Test.txt", m_gameWindow);
}

void Game::execute() {
    while (m_gameWindow->isOpen()) {
        while (m_gameWindow->pollEvent(m_event)) {
            manageEvents();
        }
        update();
        render();
    }
}

void Game::manageEvents() const {
    if (m_event.type == sf::Event::Closed) {
        m_gameWindow->close();
    }
}

void Game::update() {

}

void Game::render() {
    m_gameWindow->clear(sf::Color::White);

    m_tileMap.render();

    m_gameWindow->display();
}