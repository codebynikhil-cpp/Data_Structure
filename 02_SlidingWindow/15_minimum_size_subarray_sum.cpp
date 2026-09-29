#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 0;
        int sum = 0;
        int MinResult = INT_MAX;
        while(right < n){
            sum += nums[right];
            while(sum >= target){
                int res = right - left + 1;
                MinResult = min(res, MinResult);
                sum -= nums[left];
                left++;
            }
            right++;
        }
        return MinResult == INT_MAX ? 0 : MinResult;
    }
};

// Summary:
// Find the smallest length of a contiguous subarray whose sum is greater than or equal to target.
// Use a sliding window: expand right to include numbers, and shrink left while the sum is still valid.
// Example:
// nums = [2, 3, 1, 2, 4, 3], target = 7
// Window [2, 3, 1, 2] gives sum = 8, so length = 4.
// Then [4, 3] gives sum = 7, so the minimum valid subarray length is 2.