#pragma once
#include "stdafx.h"

class Button
{
public:
	bool state;
	sf::RectangleShape shape;

	Button(float x, float y, float width, float height);
	Button(sf::FloatRect rect);
	Button(sf::Vector2f position, sf::Vector2f size);
	/*
	*	Create button sf::RectangeShape with position and size
	*/

	Button();

	void update(sf::RenderWindow& window);
	/*
	*	On mouse click change state on true
	*   else on false
	*/

	void draw(sf::RenderWindow& window);
	/*
	*   Display button for sf::RenderWindow
	*/
};

