//
// Created by Pierre on 22/10/2021.
//

#ifndef SFML_GAMEENGINE_UTILS_HPP
#define SFML_GAMEENGINE_UTILS_HPP

#include <vector>
#include <string>

std::vector<std::string> split(std::string s) {
    std::vector<std::string> result;
    unsigned long i = 0;
    while (!s.empty()) {
        i = s.find(' ');
        if (i == std::string::npos) {
            result.push_back(s);
            break;
        }
        result.push_back(s.substr(0, i));
        s = s.substr(i + 1, s.length());
    }
    return result;
}

#endif //SFML_GAMEENGINE_UTILS_HPP
