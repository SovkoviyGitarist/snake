#include "game.h"

int main()
{
    setup();
    while (!gameOver)
    {
        Sleep(300);
        draw();
        input();
        logic();
    }
    return 0;
}