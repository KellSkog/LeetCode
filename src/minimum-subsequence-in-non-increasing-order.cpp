/* 1403. Minimum Subsequence in Non-Increasing Order
 * https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
 */
#include <algorithm>

#include "minimum-subsequence-in-non-increasing-order.hpp"

vector<int> Solution::minSubsequence(vector<int>& nums) {
    if(nums.size() < 2) return nums; // Nothing to work with!

    int totalSum = 0;
    sort(nums.begin(), nums.end(), [](int a, int b)
                                  {
                                      return a > b;
                                  });
    for(auto x : nums) totalSum += x;
    if(totalSum == 0) { // Abort, there are only zeroes in nums
        nums.resize(1);
        return nums;
    }
    int runningSum = 0;
    int i = 0;
    for(; runningSum <= (totalSum - runningSum); ++i) runningSum += nums[i];
    nums.resize(i);
    return nums;
}