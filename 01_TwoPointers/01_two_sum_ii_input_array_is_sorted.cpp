#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0, j = n-1;
        while(i < j){
            if(nums[i] + nums[j] == target) return {i+1,j+1};
            else if(nums[i]+nums[j] < target) i++;
            else j--;
        }
        return {};
    }
};

// Question: Two Sum II - Input Array Is Sorted
// Summary: Find two indices in a sorted array that add up to the target.
// Example:
// Input: nums = [2, 7, 11, 15], target = 9
// Output: [1, 2]
// Explanation: 2 + 7 = 9, so the valid pair is at indices 1 and 2 (1-indexed).
