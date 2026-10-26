#include "ball.hpp"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Rect.hpp>

Ball::Ball(float start_x, float start_y)
{
    shape.setRadius(10.f);
    shape.setPosition({start_x, start_y});
    shape.setFillColor(sf::Color::White);
    shape.setOrigin({10.f, 10.f});

    // Initial velocity
    velocity.x = 300.f;
    velocity.y = 0.f;
}

void Ball::bounceX() { velocity.x = -velocity.x; }

void Ball::bounceY() { velocity.y = -velocity.y; }

void Ball::update(float deltaTime) { shape.move(velocity * deltaTime); }

sf::FloatRect Ball::getBounds() const { return shape.getGlobalBounds(); }

const sf::CircleShape &Ball::getShape() const { return shape; }
