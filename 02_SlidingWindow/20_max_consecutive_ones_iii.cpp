#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/max-consecutive-ones-iii/
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, right = 0;
        int res = 0, zeros = 0;
        while(right < n){
            if(nums[right] == 0) zeros++;
            if(zeros > k){
                if(nums[left] == 0) zeros--;
                left++;
            }
            res = max(res, right - left + 1);
            right++;
        }
        return res;
    }
};

// Question: Max Consecutive Ones III
// Summary: Find the longest subarray after flipping at most k zeroes to ones.
// Example:
// Input: nums = [1, 1, 1, 0, 0, 1, 1, 1], k = 2
// Output: 8
// Explanation: Flipping both zeroes makes the entire array equal to 1s.


