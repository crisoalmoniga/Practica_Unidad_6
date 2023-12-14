#pragma once
#include <SFML/Graphics.hpp>
#include "circulo.h"

class Game {
public:
    Game();
    void Go();

private:
    sf::RenderWindow ventana;
    Circulo miCirculo;
    sf::Clock reloj;
};