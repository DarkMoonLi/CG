#include "CHandler.h"
#include "Constants.h"

CHandler::CHandler(sf::RenderWindow& window): m_window(window)
{
}

void CHandler::DrawInitials(std::vector<sf::RectangleShape> initials)
{
    m_window.clear(BLACK);

    for (auto& shape : initials)
    {
        m_window.draw(shape);
    }

    m_window.display();
}
