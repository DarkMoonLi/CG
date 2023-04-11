#pragma once

#include <SFML/Graphics.hpp>

class CInitials
{
public:
	CInitials() = default;
	void CreateInitials();
	std::vector<sf::RectangleShape> GetInitials();
	bool CreateP();
	bool CreateM();
	bool CreateA();
private:
	std::vector<sf::RectangleShape> m_initials;
};

