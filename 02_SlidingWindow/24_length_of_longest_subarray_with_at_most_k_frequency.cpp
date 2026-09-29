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

// Summary:
// Find the longest subarray where every value appears at most k times.
// Example: nums = [1,2,3,1,2,1,2], k = 2 -> answer is 6 because the whole window stays valid.


