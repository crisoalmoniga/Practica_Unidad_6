#pragma once
#include <SFML/Graphics.hpp>

class EnemigoInocente {
public:
    // Constructor
    EnemigoInocente(sf::Texture& textureEnemigo, sf::Texture& textureInocente, sf::Vector2f posiciones[]);

    // Método para cambiar la posición y la textura aleatoria
    void cambiarPosicionYTexturaAleatoria();

    // Método para actualizar la posición del enemigo MRUV
    void Update(float deltaTime);

    // Método para obtener el sprite del enemigo/inocente
    sf::Sprite getSprite() const;

private:
    sf::Sprite sprite;
    sf::Vector2f* posiciones;
    sf::Texture& textureEnemigo;
    sf::Texture& textureInocente;
    float velocidadY;
};