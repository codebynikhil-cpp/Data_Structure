#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 0;
        int res = 0, zeros = 0;
        while(right < n){
            if(nums[right] == 0) zeros++;
            if(zeros > 1){
                if(nums[left] == 0) zeros--;
                left++;
            }
            res = max(res, right - left);
            right++;
        }
        return res;
    }
};

// Question: Longest Subarray of 1s After Deleting One Element
// Summary: Delete exactly one element and find the longest remaining subarray containing only 1s.
// Example:
// Input: nums = [1, 1, 1, 0, 1, 1]
// Output: 5
// Explanation: Delete the zero to obtain five consecutive 1s.


