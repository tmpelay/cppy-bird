#pragma once

#include <SFML/Graphics.hpp>

using namespace sf;

class Game
{
private:
    RenderWindow *window;
    VideoMode videoMode;
    Event e;

    void initVariables();
    void initWindow();

public:
    Game();
    ~Game();

    const bool run() const;

    void pollEvents();
    void update();
    void render();
};
