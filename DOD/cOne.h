#ifndef CONE_H
#define CONE_H
#include "common.h"
class ChapterOne
{
std::string cInput;
std::string items[3] = {"TORCH", "GEM", "joint"};
public:
    void start();
    ChapterOne(std::string & choice)
    {
        this->cInput= choice;
    }
    void recall();
};
#endif

