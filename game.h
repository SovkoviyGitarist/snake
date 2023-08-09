#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <stdexcept>
#include <string>
#include <fstream>
#include <conio.h>
#include <Windows.h>


extern bool gameOver;
const int width{ 50 };
const int height{ 20 };
extern int x, y, fruitX, fruitY, score;
extern int tailX[100], tailY[100];
extern int nTail;


enum eDirection {
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};

extern eDirection dir;

void setup();
void draw();
void input();
void logic();
void ScoreOut();

#endif // GAME_H
