#include "CHandler.h"
#include "Constants.h"

CHandler::CHandler(sf::RenderWindow& window) : m_window(window)
{
}

void CHandler::DrawHouse(std::vector<std::shared_ptr<sf::Shape>> house)
{
    m_window.clear(WHITE);

    for (auto& partHouse : house)
    {
        m_window.draw(*partHouse);
    }

    m_window.display();
}
