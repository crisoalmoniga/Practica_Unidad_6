#include "Game.h"

Game::Game() : ventana(sf::VideoMode(800, 600), "Fast_&_Furious"), miCirculo(50.0f, 300.0f) {
}

void Game::Go() {
	miCirculo.setVelocidadFinal(500.0f); // Setear la velocidad final

	while (ventana.isOpen()) {
		sf::Event evento;
		while (ventana.pollEvent(evento)) {
			if (evento.type == sf::Event::Closed) {
				ventana.close();
			}
		}

		float deltaTiempo = reloj.restart().asSeconds();

		ventana.clear();

		// Actualizar y dibujar el círculo
		miCirculo.actualizar(deltaTiempo);
		miCirculo.dibujar(ventana);

		ventana.display();
	}
}