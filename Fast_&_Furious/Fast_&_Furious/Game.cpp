#include "Game.h"
#include "Circulo.h"

Game::Game() : window(sf::VideoMode(800, 600), "Fast & Furious"),
myCircle(1.0f, 500.0f) {
	// Configuración inicial de la ventana y el objeto
}

void Game::Go() {
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		float deltaTime = 1.0f / 60.0f;
		myCircle.update(deltaTime);

		window.clear();
		myCircle.draw(window);

		window.display();
	}
}