#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include "inputHandler.h"
#include "csvparse.h"
#include "common.h"
#include "cOne.h"
class GameEngine
{
    bool chapterStart = 0;
    std::string inventory[5] = {"joint", "bong", "lighter", "magnesium", "will to live"};
public:
    std::string currentChapter;
    void run();
    void intro();
    bool isRunning;
    std::string choice;
    GameEngine();
};
#endif

