#pragma once
#include <SFML/Graphics.hpp>

class CHandler
{
public:
	CHandler(sf::RenderWindow& window);
	void DrawInitials(std::vector<sf::RectangleShape> initials);
private:
	sf::RenderWindow& m_window;
};

