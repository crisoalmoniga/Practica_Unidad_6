#include "Circulo.h"

Circulo::Circulo(float initialX, float initialY, float initialVelocity, float initialAcceleration, float initialRadius)
    : x(initialX), y(initialY), velocity(initialVelocity), acceleration(initialAcceleration), radius(initialRadius) {}

void Circulo::update() {
    velocity += acceleration;
    x += velocity;
}

void Circulo::draw(sf::RenderWindow& window) {
    sf::CircleShape circle(radius);
    circle.setFillColor(sf::Color::Blue);
    circle.setPosition(x, y);
    window.draw(circle);
}

void Circulo::setAcceleration(float newAcceleration) {
    acceleration = newAcceleration;
}