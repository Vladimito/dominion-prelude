#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include "common.h"
class InputHandler
{
    public:
        void reset();
        void intro();
        void resetChapterOne();
        void receiveAnswer(std::string input);
        std::string returnAnswer();
        std::string playerAnswer;

        InputHandler(std::string input);
};
#endif