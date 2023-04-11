#pragma once
#include <SFML/Graphics.hpp>

class CHandler
{
public:
	CHandler(sf::RenderWindow& window);
	void DrawHouse(std::vector<std::shared_ptr<sf::Shape>> shapes);
private:
	sf::RenderWindow& m_window;
};

