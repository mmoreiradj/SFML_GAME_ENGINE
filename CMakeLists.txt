cmake_minimum_required(VERSION 3.20)
project(SFML_GAME_ENGINE)

set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.5 COMPONENTS system window graphics)

add_executable(SFML_GAME_ENGINE main.cpp headers/Game.hpp sources/Game.cpp headers/BetterSprite.hpp
        sources/BetterSprite.cpp headers/GameObject.hpp sources/GameObject.cpp headers/GameObjectManager.hpp
        sources/GameObjectManager.cpp headers/Monster.hpp sources/Monster.cpp sources/Tile.cpp sources/TileMap.cpp
        headers/Tile.h headers/TileMap.h)

target_link_libraries(SFML_GAME_ENGINE sfml-system sfml-window sfml-graphics)

include_directories(SFML_GAME_ENGINE headers sources)