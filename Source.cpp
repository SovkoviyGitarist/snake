#include "game.h"

int main()
{
    setup();
    while (!gameOver)
    {
        Sleep(100);
        draw();
        input();
        logic();
    }
    return 0;
}