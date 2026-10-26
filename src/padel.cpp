#include "padel.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Window/Keyboard.hpp>

Padel::Padel(float startX, float startY)
{
    shape.setSize({10.f, 100.f});
    shape.setPosition({startX, startY});
    shape.setFillColor(sf::Color::White);
    velocity.x = 0.f;
    velocity.y = 100.f;
}

void Padel::update(sf::Keyboard::Key inputKey, float deltaTime)
{

    float direction = 0.f;
    if (inputKey == sf::Keyboard::Key::W)
        direction = -1.f;
    else if (inputKey == sf::Keyboard::Key::S)
        direction = 1.f;
    shape.move(deltaTime * velocity * direction);
}

const sf::RectangleShape &Padel::getShape() const { return shape; }

sf::FloatRect Padel::getBounds() const { return shape.getGlobalBounds(); }
