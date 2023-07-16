#include "game.h"

int main()
{
    setup();
    while (!gameOver)
    {
        Sleep(150);
        draw();
        input();
        logic();
    }
    return 0;
}