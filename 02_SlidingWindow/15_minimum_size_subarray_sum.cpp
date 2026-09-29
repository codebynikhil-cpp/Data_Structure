#include <bits/stdc++.h>
using namespace std;

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

// Question: Minimum Size Subarray Sum
// Summary: Find the shortest contiguous subarray whose sum is at least target.
// Example:
// Input: target = 7, nums = [2, 3, 1, 2, 4, 3]
// Output: 2
// Explanation: The subarray [4, 3] has sum 7 and is the shortest valid window.
