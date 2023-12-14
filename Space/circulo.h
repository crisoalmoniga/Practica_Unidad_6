#pragma once
#include <SFML/Graphics.hpp>

class Circulo {
public:
    Circulo(float velocidadInicial, float velocidadFinal);

    void actualizar(float deltaTiempo);
    void dibujar(sf::RenderWindow& ventana);
    void setVelocidadFinal(float nuevaVelocidadFinal);

private:
    sf::CircleShape circulo;
    float velocidad;
    float velocidadInicial;
    float velocidadFinal;
};