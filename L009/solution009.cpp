#include "solution009.h"

int Solution009::reverse(int x) {
    int result = 0;
    while (x != 0) {
        int tail = x % 10;
        int newResult = result * 10 + tail;
        if ((newResult - tail) / 10 != result) //overflow
        {
            return 0;
        }
        result = newResult;
        x = x / 10;
    }
    return result;
}

bool Solution009::isPalindrome(int x) {
    if (x < 0) { return false; }
    else { return reverse(x) == x; }
}