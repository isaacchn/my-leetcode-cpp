#include "solution017.h"

vector<string> Solution017::letterCombinations(string digits) {
    vector<vector<char>> src{{'a', 'b', 'c'},
                             {'d', 'e', 'f'},
                             {'g', 'h', 'i'},
                             {'j', 'k', 'l'},
                             {'m', 'n', 'o'},
                             {'p', 'q', 'r', 's'},
                             {'t', 'u', 'v'},
                             {'w', 'x', 'y', 'z'}};
    vector<string> result;
    if (digits.length() == 1) {
        int digit = digits[0] - '0';
        vector<char> chars = src[digit - 2];
        for (char i : chars) {
            string s;
            stringstream stream;
            stream << i;
            s = stream.str();
            result.push_back(s);
        }
    } else if (digits.length() > 1) {
        int digit = digits[0] - '0';
        vector<char> chars = src[digit - 2];
        vector<string> strs = letterCombinations(digits.substr(1));
        for (char i : chars) {
            for (const auto &str : strs) {
                stringstream stream;
                stream << i;
                stream << str;
                string s = stream.str();
                result.push_back(s);
            }
        }
    }
    return result;
}
