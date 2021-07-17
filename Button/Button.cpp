#include "stdafx.h"
#include "Button.h"

Button::Button(float x, float y, float width, float height)
{
	this->shape.setPosition(x, y);
	this->shape.setSize(sf::Vector2f(width, height));
	state = false;
}

Button::Button(sf::FloatRect rect)
{
	this->shape.setPosition(rect.left, rect.top);
	this->shape.setSize(sf::Vector2f(rect.width, rect.height));
}

Button::Button(sf::Vector2f position, sf::Vector2f size)
{
	this->shape.setPosition(position);
	this->shape.setSize(size);
}

Button::Button()
{
}

void Button::update(sf::RenderWindow& window)
{
	this->state = false;
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
		if (this->shape.getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))) {
			this->state = true;
		}
	}
}

void Button::draw(sf::RenderWindow& window)
{
	window.draw(this->shape);
}