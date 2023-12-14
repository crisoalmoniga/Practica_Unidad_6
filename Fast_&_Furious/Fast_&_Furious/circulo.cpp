#include "Circulo.h"

Circulo::Circulo(float initialSpeed, float finalSpeed)
    : speed(initialSpeed), initialSpeed(initialSpeed), finalSpeed(finalSpeed) {
    circle.setRadius(20.0f);  // Ajustar el radio del círculo
    circle.setFillColor(sf::Color::Green);  // Cambiar el color del círculo
}

void Circulo::update(float deltaTime) {
    // Actualizar la posición del círculo en función de la velocidad y el tiempo transcurrido
    circle.move(speed * deltaTime, 0.0f);

    // Si el círculo sale por el lado derecho, vuelve a ingresar por el lado izquierdo
    if (circle.getPosition().x > 800.0f) {  // Ajustar el valor 800 según el ancho de la ventana
        circle.setPosition(-circle.getRadius(), circle.getPosition().y);

        // Aumenta la velocidad hasta alcanzar la velocidad final
        speed += 80.0f;  // Incremento de la velocidad
        if (speed > finalSpeed) {
            speed = initialSpeed;  // Reinicia la velocidad cuando alcanza la velocidad final
        }
    }
}

void Circulo::draw(sf::RenderWindow& window) {
    window.draw(circle);
}

void Circulo::setFinalSpeed(float newFinalSpeed) {
    finalSpeed = newFinalSpeed;
}