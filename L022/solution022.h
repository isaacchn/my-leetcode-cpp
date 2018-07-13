#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::count;

#ifndef MY_LEETCODE_CPP_SOLUTION022_H
#define MY_LEETCODE_CPP_SOLUTION022_H


class Solution022
{
private:
    void generateHelper(string s, int n, vector<string> &result);

public:
    vector<string> generateParenthesis(int n);
};


#endif //MY_LEETCODE_CPP_SOLUTION022_H
