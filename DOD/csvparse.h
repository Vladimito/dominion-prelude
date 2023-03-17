#ifndef CSVPARSE_H
#define CSVPARSE_H
#include "common.h"
class CSVParse
{
//row of our csv table of contents
struct row
{
    int number;
    std::string title;
    bool isCurrent;
};
struct CSVTable
{
    std::vector<row> rows;
};

friend class GameEngine;
public:

    void readCSV(const std::string &fileName);
    CSVTable mTable;
    std::vector<row> mRows;
    CSVParse();
};
#endif