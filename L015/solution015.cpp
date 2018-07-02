#include "solution015.h"

vector<vector<int>> Solution015::threeSum(vector<int> &nums)
{
    std::sort(nums.begin(), nums.end());

    if (nums.size() <= 2)
    {
        vector<vector<int>> v1(0);
        return v1;
    }
    vector<vector<int>> result;
    for (int idx = 0; idx < nums.size() - 2; idx++)
    {
        if (idx >= 1)
        {
            if (nums[idx] == nums[idx - 1]) continue;
        }
        int left = idx + 1, right = nums.size() - 1;
        while (left < right)
        {
            int target_sum = 0 - nums[idx];
            int two_sum = nums[left] + nums[right];
            if (two_sum == target_sum)
            {
                vector<int> v{nums[idx], nums[left], nums[right]};
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
    return result;
}