#include "CInitials.h"
#include "Constants.h"

void CInitials::CreateInitials()
{
	CreateP();
	CreateM();
	CreateA();
}

std::vector<sf::RectangleShape> CInitials::GetInitials()
{
	return m_initials;
}

bool CInitials::CreateP()
{
	sf::RectangleShape rectangle;
	rectangle.setFillColor(GREEN);

	rectangle.setSize(sf::Vector2f(30, 150));
	rectangle.setPosition(100, 100);
	m_initials.push_back(rectangle);

	rectangle.setSize(sf::Vector2f(30, 150));
	rectangle.setPosition(200, 100);
	m_initials.push_back(rectangle);

	rectangle.setSize(sf::Vector2f(30, 90));
	rectangle.setRotation(90);
	rectangle.setPosition(200, 100);
	m_initials.push_back(rectangle);

	return true;
}

bool CInitials::CreateM()
{
	sf::RectangleShape rectangle;
	rectangle.setFillColor(GREEN);

	rectangle.setSize(sf::Vector2f(30, 150));
	rectangle.setPosition(300, 100);
	m_initials.push_back(rectangle);

	rectangle.setSize(sf::Vector2f(30, 150));
	rectangle.setPosition(418, 100);
	m_initials.push_back(rectangle);

	rectangle.setSize(sf::Vector2f(30, 90));
	rectangle.setRotation(-45);
	rectangle.setPosition(310, 122);
	m_initials.push_back(rectangle);

	rectangle.setSize(sf::Vector2f(30, 90));
	rectangle.setRotation(45);
	rectangle.setPosition(418, 100);
	m_initials.push_back(rectangle);

	return true;
}

bool CInitials::CreateA()
{
	sf::RectangleShape rectangle;
	rectangle.setFillColor(GREEN);

	rectangle.setSize(sf::Vector2f(30, 150));
	rectangle.setRotation(30);
	rectangle.setPosition(580, 100);
	m_initials.push_back(rectangle);

	rectangle.setSize(sf::Vector2f(30, 150));
	rectangle.setPosition(570, 116);
	rectangle.setRotation(-35);
	m_initials.push_back(rectangle);

	rectangle.setSize(sf::Vector2f(30, 90));
	rectangle.setRotation(90);
	rectangle.setPosition(633, 173);
	m_initials.push_back(rectangle);

	return true;
}
