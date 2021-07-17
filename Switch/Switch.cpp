#include "stdafx.h"
#include "Switch.h"

Switch::Switch(float x, float y, float width, float height)
{
	this->shape.setPosition(x, y);
	this->shape.setSize(sf::Vector2f(width, height));
	this->state = false;
	this->delay = 200.f;
}

Switch::Switch(sf::FloatRect rect)
{
	this->shape.setPosition(rect.left, rect.top);
	this->shape.setSize(sf::Vector2f(rect.width, rect.height));
	this->state = false;
	this->delay = 200.f;
}

Switch::Switch(sf::Vector2f position, sf::Vector2f size)
{
	this->shape.setPosition(position);
	this->shape.setSize(size);
	this->state = false;
	this->delay = 200.f;
}

Switch::Switch()
{
	this->state = false;
	this->delay = 200.f;
}

void Switch::update(sf::RenderWindow& window)
{
	if (this->stateTimer.getElapsedTime().asMilliseconds() >= this->delay) {
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
			if (this->shape.getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))) {
				this->state = !state;
				this->stateTimer.restart();
			}
		}
	}
}

void Switch::draw(sf::RenderWindow& window)
{
	window.draw(this->shape);
}