#include "chapter.h"

Chapter::Chapter(int num, std::string t, bool current)
{
    struct ChapterData data;
    data.isCurrent = current;
    data.title = title;
    data.number = num;
}

