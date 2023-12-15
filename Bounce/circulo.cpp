#include "Circulo.h"

Circulo::Circulo(float radius, sf::Vector2f position, sf::Vector2f velocity)
    : radius(radius), position(position), velocity(velocity) {}

void Circulo::Update(float deltaTime) {
    velocity.y += 9.8f * deltaTime; // Gravedad

    position += velocity * deltaTime;

    if (position.y > 550.0f) {
        position.y = 550.0f;
        const float reboteFactor = 0.9f;// Factor de rebote (porcentaje de la velocidad de caída)
        velocity.y = -reboteFactor * velocity.y; // Factor de rebote (porcentaje de la velocidad de caída)
    }
}

void Circulo::Draw(sf::RenderWindow& window) {
    sf::CircleShape circle(radius);
    circle.setPosition(position);
    circle.setFillColor(sf::Color::Red);
    window.draw(circle);
}

float Circulo::GetRadius() const {
    return radius;
}

sf::Vector2f Circulo::GetPosition() const {
    return position;
}

sf::Vector2f Circulo::GetVelocity() const {
    return velocity;
}

void Circulo::SetPosition(const sf::Vector2f& newPosition) {
    position = newPosition;
}

void Circulo::SetVelocity(const sf::Vector2f& newVelocity) {
    velocity = newVelocity;
}
