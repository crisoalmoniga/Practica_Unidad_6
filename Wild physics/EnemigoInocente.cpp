#include "EnemigoInocente.h"
#include <cstdlib>

EnemigoInocente::EnemigoInocente(sf::Texture& textureEnemigo, sf::Texture& textureInocente, sf::Vector2f posiciones[])
    : textureEnemigo(textureEnemigo), textureInocente(textureInocente), posiciones(posiciones), velocidadY(0.20f) {
    
    // Configurar la textura del enemigo
    sprite.setTexture(textureEnemigo);
    
    // Establecer la posición inicial aleatoria entre las posiciones disponibles
    sprite.setPosition(this->posiciones[rand() % 6]);
}

void EnemigoInocente::cambiarPosicionYTexturaAleatoria() {
    
    // Cambiar a una nueva posición aleatoria
    sprite.setPosition(posiciones[rand() % 6]);

    // Cambiar a una nueva textura aleatoria (enemigo o inocente)
    sprite.setTexture((rand() % 2 == 0) ? textureEnemigo : textureInocente);
}

void EnemigoInocente::Update(float deltaTime) {
    
    // Mover hacia abajo con movimiento MRUV
    float desplazamientoY = velocidadY * deltaTime + 0.01f * 100.0f * deltaTime * deltaTime;
    sprite.move(0.1f, desplazamientoY);
}

sf::Sprite EnemigoInocente::getSprite() const {
    return sprite;
}