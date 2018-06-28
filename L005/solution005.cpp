#include "solution005.h"

string Solution005::longestPalindrome(const string &s)
{
    if (s.empty()) return "";
    if (s.size() == 1) return s;

    unsigned int min_start = 0, max_len = 1;
    unsigned int idx = 0;
    while (idx < s.size())
    {
        if (s.size() - idx <= max_len / 2) break;
        unsigned int j = idx, k = idx;
        while (k < s.size() - 1 && s[k + 1] == s[k])
        { k++; }
        idx = k + 1;
        while (k < s.size() - 1 && j > 0 && s[k + 1] == s[j - 1])
        {
            k++;
            j--;
        } //扩展
        unsigned int new_len = k - j + 1;
        if (new_len > max_len)
        {
            min_start = j;
            max_len = new_len;
        }
    }

    return s.substr(min_start, max_len);
}