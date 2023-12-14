#pragma once
#include <SFML/Graphics.hpp>
#include "Circulo.h"

class Game {
public:
    Game();
    void Go();

private:
    sf::RenderWindow window;
    Circulo mruvCircle;
};