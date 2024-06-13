#include "game.hpp"

/*  --- Constructors & Destructors --- */

Game::Game()
{
    this->initVariables();
    this->initWindow();
}

Game::~Game()
{
    delete this->window;
}

/*  --- Private Functions --- */

void Game::initVariables()
{
    this->window = nullptr;
}

void Game::initWindow()
{
    this->videoMode.height = 640;
    this->videoMode.width = 480;
    this->window = new RenderWindow(this->videoMode, "Cppy Bird", Style::Titlebar | Style::Close);
    this->window->setFramerateLimit(60);
}

/*  --- Accessors --- */

const bool Game::run() const
{
    return this->window->isOpen();
}

/*  --- Functions --- */

void Game::pollEvents()
{
    while (this->window->pollEvent(this->e))
    {
        switch (this->e.type)
        {
        case Event::Closed:
            this->window->close();
            break;
        case Event::KeyPressed:
            if (e.key.code == Keyboard::Escape)
                this->window->close();
            break;

        default:
            break;
        }
    }
}

void Game::update()
{
    this->pollEvents();
}

void Game::render()
{
    this->window->clear();
    this->window->display();
}