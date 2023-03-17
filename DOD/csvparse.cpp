#include "csvparse.h"

CSVParse::CSVParse()
{

};

void CSVParse::readCSV(const std::string &fileName)
{
    std::ifstream fin(fileName);
    std::string data = "data";
    row iRow;
    //assume csvs are in all the same order int,string,bool
    while(fin >> data)
    {
        iRow.number = std::stoi(data);
        fin >> iRow.title >> iRow.title;
        if(data == "true")
        {
            iRow.isCurrent = true;
        }
        else
        {
            iRow.isCurrent = false;
        }
        mRows.push_back(iRow);
    }
    mTable.rows = mRows;
}