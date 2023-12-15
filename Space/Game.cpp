#include "Game.h"

Game::Game() : window(sf::VideoMode(1024, 768), "Space"),
Circle(400.0f, 300.0f, 0.0f, 0.0f, 20.0f) {}

void Game::Go() {
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Detectar teclas presionadas
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Left) {
                    Circle.setAcceleration(-0.0001f);  // Aceleración hacia la izquierda
                }
                else if (event.key.code == sf::Keyboard::Right) {
                    Circle.setAcceleration(0.0001f);  // Aceleración hacia la derecha
                }
            }

            // Detectar teclas liberadas
            if (event.type == sf::Event::KeyReleased) {
                if (event.key.code == sf::Keyboard::Left || event.key.code == sf::Keyboard::Right) {
                    Circle.setAcceleration(0.0f);  // Detener la aceleración cuando se suelta la tecla
                }
            }
        }

        // Actualizar la velocidad y posición del círculo
        Circle.update();

        // Limpiar la ventana
        window.clear();

        // Dibujar el círculo en la nueva posición
        Circle.draw(window);

        // Actualizar la ventana
        window.display();
    }
}
