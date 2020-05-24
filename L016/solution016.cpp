#include "solution016.h"

int Solution016::threeSumClosest(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());//由低至高排序
    int minus_current_short = INT_MAX;//实际两数和与理想两数和的差
    for (int idx = 0; idx < nums.size() - 2; idx++) {
        int left = idx + 1, right = nums.size() - 1;
        int target_sum = target - nums[idx];//最理想的两数和

        while (left < right) {
            int current_sum = nums[left] + nums[right];
            int current_short = current_sum - target_sum;
            if (abs(minus_current_short) > abs(current_short)) {
                minus_current_short = current_short;//新的最小差距值
            }
            if (current_short < 0) left++;//当前两数和小于最理想两数和
            else if (current_short > 0) right--;//当前两数和大于最理想两数和
            else break;
        }
    }
    return target + minus_current_short;
}