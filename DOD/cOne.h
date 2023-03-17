#ifndef CONE_H
#define CONE_H
#include "common.h"
class ChapterOne
{
    public:
        void start(std::string &choice);
        ChapterOne(std::string & choice)
        {
            auto input = choice;
            start(input);
        }
};
#endif

