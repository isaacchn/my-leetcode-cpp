#include "solution018.h"

vector<vector<int>> Solution018::fourSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    if (nums.size() < 4) return result;
    for (int idx0 = 0; idx0 < nums.size() - 3; idx0++)
    {
        //将四数之和转为三数之和
        if (idx0 >= 1)
        {
            if (nums[idx0] == nums[idx0 - 1]) continue;//去重
        }
        for (int idx1 = idx0 + 1; idx1 < nums.size() - 2; idx1++)
        {
            if (idx1 - idx0 >= 2 && nums[idx1] == nums[idx1 - 1]) continue;//去重
            int left = idx1 + 1, right = nums.size() - 1;
            /**
             * 找到这样两个数，使得：
             * nums[idx0]+nums[idx1]+nums[left]+nums[right]=target;
             */
            while (left < right)
            {
                int target_sum = target - nums[idx0] - nums[idx1];
                int two_sum = nums[left] + nums[right];
                if (two_sum == target_sum)
                {
                    vector<int> v{nums[idx0], nums[idx1], nums[left], nums[right]};
                    result.push_back(v);
                    while (left < right && nums[left] == nums[left + 1])
                    { left++; }
                    while (left < right && nums[right] == nums[right - 1])
                    { right--; }
                    left++;
                    right--;
                } else if (two_sum > target_sum)
                { right--; }
                else
                { left++; }
            }
        }
    }
    return result;
}
