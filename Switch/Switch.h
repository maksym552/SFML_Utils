#pragma once
class Switch
{
	sf::Clock stateTimer;
public:
	bool state;
	float delay;
	sf::RectangleShape shape;

	Switch(float x, float y, float width, float height);
	Switch(sf::FloatRect rect);
	Switch(sf::Vector2f position, sf::Vector2f size);
	/*
	*	Create switch sf::RectangeShape with position and size
	*/

	Switch();

	void update(sf::RenderWindow& window);
	/*
	*	On mouse click change state on true
	*   else on false
	*	You can change delay between state changes
	*/

	void draw(sf::RenderWindow& window);
	/*
	*   Display switch for sf::RenderWindow
	*/
};

