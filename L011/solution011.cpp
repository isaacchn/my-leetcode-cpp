#include "solution011.h"

int max(int a, int b) {
    if (b > a) return b;
    return a;
}

int min(int a, int b) {
    if (b > a)return a;
    return b;
}

//O(n^2)
int Solution011::maxArea(vector<int> &height) {
    int max_area = 0;
    for (int i = 0; i < height.size(); i++) {
        for (int j = i + 1; j < height.size(); j++) {
            int area;
            if (height[i] < height[j]) area = height[i] * (j - i);
            else area = height[j] * (j - i);
            if (area > max_area) max_area = area;
        }
    }
    return max_area;
}

//O(n)
int Solution011::maxArea2(vector<int> &height) {
    int max_area = 0;
    int l = 0, r = height.size() - 1;
    while (l < r) {
        max_area = max(max_area, min(height[l], height[r]) * (r - l));
        if (height[l] < height[r]) l++;
        else r--;
    }

    return max_area;
}