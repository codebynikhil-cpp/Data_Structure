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

// Summary:
// Find the longest subarray with at most one zero after deleting one element.
// Example: nums = [1,1,1,0,1,1], answer is 5 because you can delete the single zero.


