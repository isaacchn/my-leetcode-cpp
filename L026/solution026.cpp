#include "solution026.h"

int Solution026::removeDuplicates(vector<int> &nums) {
    if (nums.size() < 2) {
        return nums.size();
    }
    int cur_idx = 0;//当前操作vector的index
    int cur_max_idx = 0;//当前最大数值所在的index
    int cur_max = INT32_MIN;//当前最大数值
    while (cur_idx < nums.size() && cur_max_idx < nums.size()) {
        if (nums[cur_idx] > cur_max) {
            cur_max = nums[cur_idx];
            cur_idx++;
            cur_max_idx++;
        } else {
            while (cur_max_idx < nums.size()) {
                if (nums[cur_max_idx] > cur_max) { //获取到新max
                    nums[cur_idx] = nums[cur_max_idx];
                    cur_max = nums[cur_max_idx];
                    if (cur_max_idx == nums.size() - 1) { //max已经到了向量尾
                        return cur_idx + 1;
                    } else {
                        cur_idx++;
                        cur_max_idx++;
                    }
                } else {//没娶有获取到新max
                    if (cur_max_idx == nums.size() - 1) { //max已经到了向量尾
                        return cur_idx;
                    } else {
                        cur_max_idx++;
                    }
                }

            }
        }
    }
    return cur_idx;
}

int Solution026::removeDuplicates2(vector<int> &nums) {
    if (nums.size() < 2) {
        return nums.size();
    }
    int cur_idx = 0;//当前操作vector的index
    int cur_max_idx = 0;//当前最大数值所在的index
    int cur_max = INT32_MIN;//当前最大数值
    while (cur_idx < nums.size() && cur_max_idx < nums.size()) {
        if (nums[cur_idx] > cur_max) {
            cur_max = nums[cur_idx];
            cur_idx++;
            cur_max_idx++;
        } else {
            while (cur_max_idx < nums.size()) {
                if (cur_max_idx != nums.size() - 1) {
                    if (nums[cur_max_idx] > cur_max) {
                        nums[cur_idx] = nums[cur_max_idx];
                        cur_max = nums[cur_max_idx];
                        cur_idx++;
                        cur_max_idx++;
                    } else {
                        cur_max_idx++;
                    }
                } else {
                    if (nums[cur_max_idx] > cur_max) {
                        nums[cur_idx] = nums[cur_max_idx];
                        return cur_idx + 1;
                    } else {
                        return cur_idx;
                    }
                }
            }
        }
    }
    return cur_idx;
}

int Solution026::removeDuplicates3(vector<int> &nums) {
    int count = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            count++;
        } else {
            nums[i - count] = nums[i];
        }
    }
    return nums.size() - count;
}