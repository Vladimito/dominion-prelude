#include "GameEngine.h"

GameEngine::GameEngine()
{
    currentChapter= "0";
    isRunning = true;
    choice = "kether";
}

void GameEngine::intro()
{
    //main game loop, assumes we are at program start
    std::cout << "Dungeon of The Dominion: Prelude\nBegin the adventure? Y/N\n";
    std::cin >> (choice);
    auto in = InputHandler(choice);
    choice = in.returnAnswer();
    if( choice == "Y")
    {
        //Start Chapter one
        currentChapter = "1";
    }
    else if(choice == "N")
    {
        isRunning = !isRunning;
    }
    else if(choice != "")
    {
        std::cout << "Not a valid input\n";
    }
}
void GameEngine::run()
{
    auto parse = CSVParse();
    parse.readCSV(TABLE_OF_CONTENTS);
    std::string decision = "";
    intro();
    while(isRunning)
    {
        if(currentChapter == "0")
        {
            intro();
        }
        else if (currentChapter == "1" && chapterStart == false)
        {
            auto c1 = ChapterOne(choice);
            c1.start();
            chapterStart = true;
        }
    }
}