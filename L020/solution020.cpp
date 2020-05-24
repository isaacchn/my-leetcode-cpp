#include "solution020.h"

bool Solution020::isValid(string s) {
    stack<char> stack;
    for (char c:s) {
        if (c == '{' || c == '[' || c == '(') {
            stack.push(c);
        } else {
            if (c == '}') {
                if (stack.empty() || stack.top() != '{') return false;
                stack.pop();
            } else if (c == ']') {
                if (stack.empty() || stack.top() != '[') return false;
                stack.pop();
            } else {
                if (stack.empty() || stack.top() != '(') return false;
                stack.pop();
            }
        }
    }
    return stack.empty();
}