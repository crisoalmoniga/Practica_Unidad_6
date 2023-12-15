#pragma once
#include "Circulo.h"
#include <SFML/Graphics.hpp>

class Game {
public:
    Game();
    void Go();

private:
    sf::RenderWindow window;
    Circulo circulo;
};