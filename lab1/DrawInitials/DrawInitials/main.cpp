#define NOMINMAX
#include <windows.h>
#include "Constants.h"
#include "CHandler.h"
#include "CInitials.h"

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGTH), WINDOW_TITLE);
    CHandler handler(window);
    CInitials initials;
    initials.CreateInitials();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        handler.DrawInitials(initials.GetInitials());
    }

    return 0;
}