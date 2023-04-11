#pragma once

#include <SFML/Graphics.hpp>
#include "Constants.h"

class CHouse
{
public:
	CHouse() = default;
	void CreateHouse();
	std::vector<std::shared_ptr<sf::Shape>> GetHouse();
	void CreateWalls();
	void CreateRoof();
	void CreateWindows();
	void CreateDoor();
	void CreateStep();
	void CreatePipe();
	void CreateFence();
private:
	std::vector<std::shared_ptr<sf::Shape>> m_house;
};

