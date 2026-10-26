#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/System/Vector2.hpp>

class Ball
{
  public:
    void update(float deltaTime);
    Ball(float start_x, float start_y);

    sf::FloatRect getBounds() const;
    const sf::CircleShape &getShape() const;
    void bounceX();
    void bounceY();

  private:
    sf::CircleShape shape;
    sf::Vector2f velocity;
};
