#ifndef CHAPTER_H
#define CHAPTER_H
#include "common.h"
class Chapter
{
struct ChapterData
{
    int number;
    std::string title;
    bool isCurrent;
};

friend class ChapterManager;
friend class CSVParse;
int number;
std::string title;
bool isCurrent;

public:
    Chapter(int num, std::string t, bool current);
};
#endif