#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int left = 0, right = 0;
        int res = 0;
        while(right < n){
            mp[nums[right]]++;
            while(mp[nums[right]] > k){
                mp[nums[left]]--;
                if(mp[nums[left]] == 0) mp.erase(nums[left]);
                left++;
            }
            res = max(res, right - left + 1);
            right++;
        }
        return res;
    }
};

// Question: Length of Longest Subarray With at Most K Frequency
// Summary: Find the longest subarray in which every value appears no more than k times.
// Example:
// Input: nums = [1, 2, 3, 1, 2, 1, 2], k = 2
// Output: 5
// Explanation: [1, 2, 3, 1, 2] is valid, while any length-six window contains a value more than twice.


