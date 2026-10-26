#pragma once
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Keyboard.hpp>

class Padel
{
  public:
    Padel(float startX, float startY);
    void update(sf::Keyboard::Key inputKey, float deltaTime);
    const sf::RectangleShape &getShape() const;

    sf::FloatRect getBounds() const;

  private:
    sf::RectangleShape shape;
    sf::Vector2f velocity;
};
