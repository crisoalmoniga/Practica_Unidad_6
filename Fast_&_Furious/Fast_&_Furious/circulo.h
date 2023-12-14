#pragma once
#include <SFML/Graphics.hpp>

class Circulo {
public:
    Circulo(float initialSpeed, float finalSpeed);
    void update(float deltaTime);
    void draw(sf::RenderWindow& window);
    void setFinalSpeed(float newFinalSpeed);

private:
    sf::CircleShape circle;
    float speed;
    float initialSpeed;
    float finalSpeed;
};