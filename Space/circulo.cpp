#include "circulo.h"

Circulo::Circulo(float velocidadInicial, float velocidadFinal)
    : velocidad(velocidadInicial), velocidadInicial(velocidadInicial), velocidadFinal(velocidadFinal) {
    circulo.setRadius(20.0f); // Ajustar el radio del c�rculo
    circulo.setFillColor(sf::Color::Green); // Cambiar el color del c�rculo
}

void Circulo::actualizar(float deltaTiempo) {
    // Actualizar la posici�n del c�rculo en funci�n de la velocidad y el tiempo transcurrido
    circulo.move(velocidad * deltaTiempo, 0.0f);

    // Si el c�rculo sale por el lado derecho, vuelve a ingresar por el lado izquierdo
    if (circulo.getPosition().x > 800.0f) { // Ajustar el valor 800 seg�n el ancho de la ventana
        circulo.setPosition(-circulo.getRadius(), circulo.getPosition().y);
       
        // Aumenta la velocidad hasta alcanzar la velocidad final
        velocidad += 80.0f; // Ajustar el incremento seg�n tus preferencias
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