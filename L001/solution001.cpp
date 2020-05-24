#include "solution001.h"

vector<int> Solution001::twoSum(vector<int> &nums, int target) {
    vector<int> result;
    int length = nums.size();
    for (uint i = 0; i < length - 1; i++) {
        for (uint j = i + 1; j < length; j++) {
            if (nums[i] + nums[j] != target)
                continue;
            else {
                cout << "nums[" << i << "]=" << nums[i] << ",nums[" << j << "]=" << nums[j] << ",sum="
                     << nums[i] + nums[j] << endl;
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}