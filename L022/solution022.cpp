/**
 * 给出 n 代表生成括号的对数，请你写出一个函数，使其能够生成所有可能的并且有效的括号组合。
 * 例如，给出 n = 3，生成结果为：
 * [
 *   "((()))",
 *   "(()())",
 *   "(())()",
 *   "()(())",
 *   "()()()"
 * ]
 */

#include "solution022.h"

void Solution022::generateHelper(string s, int n, vector<string> &result) {
    int l = count(s.begin(), s.end(), '(');
    int r = count(s.begin(), s.end(), ')');

    if (l < r || l > n || r > n) return;

    if (s.length() == n * 2) {
        result.push_back(s);
        return;
    }

    string s1 = s + '(';
    string s2 = s + ')';
    generateHelper(s1, n, result);
    generateHelper(s2, n, result);
}

vector<string> Solution022::generateParenthesis(int n) {
    vector<string> result;
    if (n == 0) return result;
    generateHelper("(", n, result);
    return result;
}