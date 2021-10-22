//
// Created by Martin Moreira de Jesus on 13/10/2021.
// Helped by Pierre Teodoresco
//

#include <iostream>
#include "Game.hpp"
#include "utils.hpp"

int main() {
    /*Game game(800, 800, "My window");
    game.execute();*/

    std::string str = "Je te bz";
    std::vector<std::string> vStr = split(str);
    for (unsigned i = 0; i < vStr.size(); ++i) {
        std::cout << vStr[i] << std::endl;
    }
    return 0;
}
