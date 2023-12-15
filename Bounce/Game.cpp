#include "Game.h"

Game::Game() : window(sf::VideoMode(800, 600), "Bounce"), circulo(25.0f, sf::Vector2f(100.0f, 100.0f), sf::Vector2f(50.0f, 0.0f)) {}

void Game::Go() {
    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        float deltaTime = 0.1f / 60.0f;
        circulo.Update(deltaTime);

        window.clear();
        circulo.Draw(window);
        window.display();
    }
}
