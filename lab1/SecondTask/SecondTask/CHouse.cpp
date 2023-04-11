#include "CHouse.h"

void CHouse::CreateHouse()
{
    CreateWalls();
    CreateDoor();
    CreateStep();
    CreateWindows();
    CreateRoof();
    CreatePipe();
    CreateFence();
}

std::vector<std::shared_ptr<sf::Shape>> CHouse::GetHouse()
{
    return m_house;
}

void CHouse::CreateWalls()
{
    sf::RectangleShape mainWall;
    mainWall.setFillColor(SADDLE_BROWN);
    mainWall.setOutlineThickness(OUTLINE_THICKNESS);
    mainWall.setOutlineColor(BLACK);
    mainWall.setSize(sf::Vector2f(400.f, 300.f));
    mainWall.setPosition(sf::Vector2f(100.f, 400.f));
    auto mainWallPtr = std::make_shared<sf::RectangleShape>(mainWall);
    m_house.push_back(std::move(mainWallPtr));

    sf::ConvexShape partWall;
    partWall.setFillColor(SADDLE_BROWN);
    partWall.setOutlineThickness(OUTLINE_THICKNESS);
    partWall.setOutlineColor(BLACK);
    partWall.setPointCount(4);
    partWall.setPoint(0, sf::Vector2f(500.f, 700.f));
    partWall.setPoint(1, sf::Vector2f(500.f, 400.f));
    partWall.setPoint(2, sf::Vector2f(650.f, 250.f));
    partWall.setPoint(3, sf::Vector2f(650.f, 550.f));
    auto partWallPtr = std::make_shared<sf::ConvexShape>(partWall);
    m_house.push_back(std::move(partWallPtr));

}

void CHouse::CreateRoof()
{
    sf::ConvexShape frontSideRoof;
    frontSideRoof.setFillColor(DARK_RED);
    frontSideRoof.setOutlineThickness(OUTLINE_THICKNESS);
    frontSideRoof.setOutlineColor(BLACK);
    frontSideRoof.setPointCount(3);
    frontSideRoof.setPoint(0, sf::Vector2f(50.f, 400.f));
    frontSideRoof.setPoint(1, sf::Vector2f(550.f, 400.f));
    frontSideRoof.setPoint(2, sf::Vector2f(400.f, 100.f));
    auto frontSideRoofPtr = std::make_shared<sf::ConvexShape>(frontSideRoof);
    m_house.push_back(std::move(frontSideRoofPtr));

    sf::ConvexShape sideRoof;
    sideRoof.setFillColor(DARK_RED);
    sideRoof.setOutlineThickness(OUTLINE_THICKNESS);
    sideRoof.setOutlineColor(BLACK);
    sideRoof.setPointCount(3);
    sideRoof.setPoint(0, sf::Vector2f(550.f, 400.f));
    sideRoof.setPoint(1, sf::Vector2f(700.f, 250.f));
    sideRoof.setPoint(2, sf::Vector2f(400.f, 100.f));
    auto sideRoofPtr = std::make_shared<sf::ConvexShape>(sideRoof);
    m_house.push_back(std::move(sideRoofPtr));
}

void CHouse::CreateWindows()
{
    sf::RectangleShape frontalWindowFrame;
    frontalWindowFrame.setFillColor(SIENNA);
    frontalWindowFrame.setOutlineThickness(OUTLINE_THICKNESS);
    frontalWindowFrame.setOutlineColor(BLACK);
    frontalWindowFrame.setSize(sf::Vector2f(120.f, 200.f));
    frontalWindowFrame.setPosition(sf::Vector2f(340.f, 440.f));
    auto frontalWindowFramePtr = std::make_shared<sf::RectangleShape>(frontalWindowFrame);
    m_house.push_back(std::move(frontalWindowFramePtr));

    sf::RectangleShape frontalWindow;
    frontalWindow.setFillColor(LIGHT_CYAN);
    frontalWindow.setOutlineThickness(OUTLINE_THICKNESS);
    frontalWindow.setOutlineColor(BLACK);
    frontalWindow.setSize(sf::Vector2f(100.f, 180.f));
    frontalWindow.setPosition(sf::Vector2f(350.f, 450.f));
    auto frontalWindowPtr = std::make_shared<sf::RectangleShape>(frontalWindow);
    m_house.push_back(std::move(frontalWindowPtr));    

    sf::ConvexShape firstSideWindowFrame;
    firstSideWindowFrame.setFillColor(SIENNA);
    firstSideWindowFrame.setOutlineThickness(OUTLINE_THICKNESS);
    firstSideWindowFrame.setOutlineColor(BLACK);
    firstSideWindowFrame.setPointCount(4);
    firstSideWindowFrame.setPoint(0, sf::Vector2f(520.f, 430.f));
    firstSideWindowFrame.setPoint(1, sf::Vector2f(570.f, 380.f));
    firstSideWindowFrame.setPoint(2, sf::Vector2f(570.f, 560.f));
    firstSideWindowFrame.setPoint(3, sf::Vector2f(520.f, 610.f));
    auto firstSideWindowFramePtr = std::make_shared<sf::ConvexShape>(firstSideWindowFrame);
    m_house.push_back(std::move(firstSideWindowFramePtr));

    sf::ConvexShape firstSideWindow;
    firstSideWindow.setFillColor(LIGHT_CYAN);
    firstSideWindow.setOutlineThickness(OUTLINE_THICKNESS);
    firstSideWindow.setOutlineColor(BLACK);
    firstSideWindow.setPointCount(4);
    firstSideWindow.setPoint(0, sf::Vector2f(525.f, 435.f));
    firstSideWindow.setPoint(1, sf::Vector2f(565.f, 395.f));
    firstSideWindow.setPoint(2, sf::Vector2f(565.f, 555.f));
    firstSideWindow.setPoint(3, sf::Vector2f(525.f, 595.f));
    auto firstSideWindowPtr = std::make_shared<sf::ConvexShape>(firstSideWindow);
    m_house.push_back(std::move(firstSideWindowPtr));

    sf::ConvexShape secondSideWindowFrame;
    secondSideWindowFrame.setFillColor(SIENNA);
    secondSideWindowFrame.setOutlineThickness(OUTLINE_THICKNESS);
    secondSideWindowFrame.setOutlineColor(BLACK);
    secondSideWindowFrame.setPointCount(4);
    secondSideWindowFrame.setPoint(0, sf::Vector2f(580.f, 370.f));
    secondSideWindowFrame.setPoint(1, sf::Vector2f(630.f, 320.f));
    secondSideWindowFrame.setPoint(2, sf::Vector2f(630.f, 500.f));
    secondSideWindowFrame.setPoint(3, sf::Vector2f(580.f, 550.f));
    auto secondSideWindowFramePtr = std::make_shared<sf::ConvexShape>(secondSideWindowFrame);
    m_house.push_back(std::move(secondSideWindowFramePtr));

    sf::ConvexShape secondSideWindow;
    secondSideWindow.setFillColor(LIGHT_CYAN);
    secondSideWindow.setOutlineThickness(OUTLINE_THICKNESS);
    secondSideWindow.setOutlineColor(BLACK);
    secondSideWindow.setPointCount(4);
    secondSideWindow.setPoint(0, sf::Vector2f(585.f, 375.f));
    secondSideWindow.setPoint(1, sf::Vector2f(625.f, 335.f));
    secondSideWindow.setPoint(2, sf::Vector2f(625.f, 495.f));
    secondSideWindow.setPoint(3, sf::Vector2f(585.f, 535.f));
    auto secondSideWindowPtr = std::make_shared<sf::ConvexShape>(secondSideWindow);
    m_house.push_back(std::move(secondSideWindowPtr));
}

void CHouse::CreateDoor()
{
    sf::RectangleShape doorFrame;
    doorFrame.setFillColor(SIENNA);
    doorFrame.setOutlineThickness(OUTLINE_THICKNESS);
    doorFrame.setOutlineColor(BLACK);
    doorFrame.setSize(sf::Vector2f(120.f, 210.f));
    doorFrame.setPosition(sf::Vector2f(180.f, 460.f));
    auto doorFramePtr = std::make_shared<sf::RectangleShape>(doorFrame);
    m_house.push_back(std::move(doorFramePtr));

    sf::RectangleShape door;
    door.setFillColor(PERU);
    door.setOutlineThickness(OUTLINE_THICKNESS);
    door.setOutlineColor(BLACK);
    door.setSize(sf::Vector2f(100.f, 200.f));
    door.setPosition(sf::Vector2f(190.f, 470.f));
    auto doorPtr = std::make_shared<sf::RectangleShape>(door);
    m_house.push_back(std::move(doorPtr));

    sf::CircleShape doorHandle;
    doorHandle.setFillColor(DARK_KHAKI);
    doorHandle.setRadius(5);
    doorHandle.setPosition(sf::Vector2f(205.f, 585.f));
    doorHandle.setOutlineThickness(OUTLINE_THICKNESS);
    doorHandle.setOutlineColor(BLACK);
    auto doorHandlePtr = std::make_shared<sf::CircleShape>(doorHandle);
    m_house.push_back(std::move(doorHandlePtr));

}

void CHouse::CreateStep()
{
    sf::RectangleShape frontSideStep;
    frontSideStep.setFillColor(LIGHT_GRAY);
    frontSideStep.setOutlineThickness(OUTLINE_THICKNESS);
    frontSideStep.setOutlineColor(BLACK);
    frontSideStep.setSize(sf::Vector2f(120.f, 30.f));
    frontSideStep.setPosition(sf::Vector2f(160.f, 700.f));
    auto frontSideStepPtr = std::make_shared<sf::RectangleShape>(frontSideStep);
    m_house.push_back(std::move(frontSideStepPtr));

    sf::ConvexShape sideStep;
    sideStep.setFillColor(LIGHT_GRAY);
    sideStep.setOutlineThickness(OUTLINE_THICKNESS);
    sideStep.setOutlineColor(BLACK);
    sideStep.setPointCount(4);
    sideStep.setPoint(0, sf::Vector2f(280.f, 730.f));
    sideStep.setPoint(1, sf::Vector2f(280.f, 700.f));
    sideStep.setPoint(2, sf::Vector2f(300.f, 670.f));
    sideStep.setPoint(3, sf::Vector2f(300.f, 700.f));
    auto sideStepPtr = std::make_shared<sf::ConvexShape>(sideStep);
    m_house.push_back(std::move(sideStepPtr));

    sf::ConvexShape upperSideStep;
    upperSideStep.setFillColor(LIGHT_GRAY);
    upperSideStep.setOutlineThickness(OUTLINE_THICKNESS);
    upperSideStep.setOutlineColor(BLACK);
    upperSideStep.setPointCount(4);
    upperSideStep.setPoint(0, sf::Vector2f(160.f, 700.f));
    upperSideStep.setPoint(1, sf::Vector2f(180.f, 670.f));
    upperSideStep.setPoint(2, sf::Vector2f(300.f, 670.f));
    upperSideStep.setPoint(3, sf::Vector2f(280.f, 700.f));
    auto upperSideStepPtr = std::make_shared<sf::ConvexShape>(upperSideStep);
    m_house.push_back(std::move(upperSideStepPtr));
}

void CHouse::CreatePipe()
{
    sf::ConvexShape pipeBase;
    pipeBase.setFillColor(LIGHT_GRAY);
    pipeBase.setOutlineThickness(OUTLINE_THICKNESS);
    pipeBase.setOutlineColor(BLACK);
    pipeBase.setPointCount(6);
    pipeBase.setPoint(0, sf::Vector2f(500.f, 220.f));
    pipeBase.setPoint(1, sf::Vector2f(500.f, 180.f));
    pipeBase.setPoint(2, sf::Vector2f(520.f, 205.f));
    pipeBase.setPoint(3, sf::Vector2f(540.f, 180.f));
    pipeBase.setPoint(4, sf::Vector2f(540.f, 235.f));
    pipeBase.setPoint(5, sf::Vector2f(520.f, 255.f));
    auto pipeBasePtr = std::make_shared<sf::ConvexShape>(pipeBase);
    m_house.push_back(std::move(pipeBasePtr));

    sf::ConvexShape upperPartPipe;
    upperPartPipe.setFillColor(LIGHT_GRAY);
    upperPartPipe.setOutlineThickness(OUTLINE_THICKNESS);
    upperPartPipe.setOutlineColor(BLACK);
    upperPartPipe.setPointCount(4);
    upperPartPipe.setPoint(0, sf::Vector2f(490.f, 185.f));
    upperPartPipe.setPoint(1, sf::Vector2f(520.f, 155.f));
    upperPartPipe.setPoint(2, sf::Vector2f(550.f, 195.f));
    upperPartPipe.setPoint(3, sf::Vector2f(520.f, 225.f));
    auto upperPartPipePtr = std::make_shared<sf::ConvexShape>(upperPartPipe);
    m_house.push_back(std::move(upperPartPipePtr));
}

void CHouse::CreateFence()
{
    for (float position = 650.f; position <= 950.f; position += 20.f)
    {
        sf::RectangleShape fence;
        fence.setFillColor(DARK_KHAKI);
        fence.setOutlineThickness(OUTLINE_THICKNESS);
        fence.setOutlineColor(BLACK);
        fence.setSize(sf::Vector2f(20.f, 225.f));
        fence.setPosition(sf::Vector2f(position, 325.f));
        auto fencePtr = std::make_shared<sf::RectangleShape>(fence);
        m_house.push_back(std::move(fencePtr));
    }

    for(float position = 500.f; position <= 800.f; position += 20.f)
    {
        sf::RectangleShape fence;
        fence.setFillColor(DARK_KHAKI);
        fence.setOutlineThickness(OUTLINE_THICKNESS);
        fence.setOutlineColor(BLACK);
        fence.setSize(sf::Vector2f(20.f, 225.f));
        fence.setPosition(sf::Vector2f(position, 475.f));
        auto fencePtr = std::make_shared<sf::RectangleShape>(fence);
        m_house.push_back(std::move(fencePtr));
    }

    float positionX = 820.f; 
    float positionY = 700.f;

    while (positionX <= 955.f && positionY >= 565.f)
    {
        sf::ConvexShape fence;
        fence.setFillColor(DARK_KHAKI);
        fence.setOutlineThickness(OUTLINE_THICKNESS);
        fence.setOutlineColor(BLACK);
        fence.setPointCount(4);
        fence.setPoint(0, sf::Vector2f(positionX, positionY));
        fence.setPoint(1, sf::Vector2f(positionX, positionY - 225.f));
        fence.setPoint(2, sf::Vector2f(positionX + 15.f, positionY - 240.f));
        fence.setPoint(3, sf::Vector2f(positionX + 15.f, positionY - 15.f));
        auto fencePtr = std::make_shared<sf::ConvexShape>(fence);
        m_house.push_back(std::move(fencePtr));
        positionX += 15.f;
        positionY -= 15.f;
    }
}
