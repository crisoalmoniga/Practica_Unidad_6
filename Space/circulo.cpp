#include "circulo.h"

Circulo::Circulo(float velocidadInicial, float velocidadFinal)
    : velocidad(velocidadInicial), velocidadInicial(velocidadInicial), velocidadFinal(velocidadFinal) {
    circulo.setRadius(20.0f); // Ajustar el radio del círculo
    circulo.setFillColor(sf::Color::Green); // Cambiar el color del círculo
}

void Circulo::actualizar(float deltaTiempo) {
    // Actualizar la posición del círculo en función de la velocidad y el tiempo transcurrido
    circulo.move(velocidad * deltaTiempo, 0.0f);

    // Si el círculo sale por el lado derecho, vuelve a ingresar por el lado izquierdo
    if (circulo.getPosition().x > 800.0f) { // Ajustar el valor 800 según el ancho de la ventana
        circulo.setPosition(-circulo.getRadius(), circulo.getPosition().y);
       
        // Aumenta la velocidad hasta alcanzar la velocidad final
        velocidad += 80.0f; // Ajustar el incremento según tus preferencias
        if (velocidad > velocidadFinal) {
            velocidad = velocidadInicial; // Reinicia la velocidad cuando alcanza la velocidad final
        }
    }
}

void Circulo::dibujar(sf::RenderWindow& ventana) {
    ventana.draw(circulo);
}

void Circulo::setVelocidadFinal(float nuevaVelocidadFinal) {
    velocidadFinal = nuevaVelocidadFinal;
}