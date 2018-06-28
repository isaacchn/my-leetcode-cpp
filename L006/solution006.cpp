#include "solution006.h"

string Solution006::convert(string s, unsigned int numRows)
{
    if (numRows == 1)
        return s;
    else
    {
        const unsigned int len = s.size();
        string *str = new string[numRows];
        int row = 0;
        int next = 1;
        for (unsigned int i = 0; i < len; i++)
        {
            str[row].push_back(s.at(i));
            if (row == 0)
                next = 1;
            else if (row == numRows - 1)
                next = -1;
            row += next;
        }
        string s1;
        for (int i1 = 0; i1 < numRows; i1++)
        {
            s1.append(str[i1]);
        }
        return s1;
    }
}