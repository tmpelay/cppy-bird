#include "game.hpp"

int main(int argc, char const *argv[])
{
    Game game;
    while (game.run())
    {
        game.update();
        game.render();
    }

    return 0;
}
