#include <iostream>
#include <string>
#include <algorithm>
#include <memory>

class Input
{
    public:
        void reset();
        void intro();
        void resetChapterOne();
        std::string playerAnswer = "";
};