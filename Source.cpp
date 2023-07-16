#include "game.h"

int main()
{
    setup();
    while (!gameOver)
    {
        Sleep(200);
        draw();
        input();
        logic();
    }
    return 0;
}