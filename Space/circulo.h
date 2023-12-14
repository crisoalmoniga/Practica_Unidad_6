#pragma once
#include <SFML/Graphics.hpp>

class Circulo {
public:
    Circulo(float initialX, float initialY, float initialVelocity, float initialAcceleration, float initialRadius);
    void update();
    void draw(sf::RenderWindow& window);
    void setAcceleration(float newAcceleration);

private:
    float x;
    float y;
    float velocity;
    float acceleration;
    float radius;
};