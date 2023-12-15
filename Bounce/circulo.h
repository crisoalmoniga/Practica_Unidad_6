#pragma once
#include <SFML/Graphics.hpp>

class Circulo {
public:
    Circulo(float radius, sf::Vector2f position, sf::Vector2f velocity);
    void Update(float deltaTime);
    void Draw(sf::RenderWindow& window);

    float GetRadius() const;
    sf::Vector2f GetPosition() const;
    sf::Vector2f GetVelocity() const;
    void SetPosition(const sf::Vector2f& position);
    void SetVelocity(const sf::Vector2f& velocity);

private:
    float radius;
    sf::Vector2f position;
    sf::Vector2f velocity;
};