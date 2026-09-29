#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        long long sum = 0;
        int n = nums.size();
        for(int i=0; i<k; i++) {
            mp[nums[i]]++;
            sum += nums[i];
        }
        long long maxSum = 0;
        if(mp.size() == k)
            maxSum = sum;
        for(int i=k; i<n; i++){
            sum -= nums[i-k];
            mp[nums[i-k]]--;

            if(mp[nums[i-k]] == 0) mp.erase(nums[i-k]);
            mp[nums[i]]++;
            sum += nums[i];
            if(mp.size() == k)
                maxSum = max(sum , maxSum);
        }
        return maxSum;
    }
};

// Question: Maximum Sum of Distinct Subarrays With Length K
// Summary: Find the largest sum of a length-k subarray whose values are all distinct.
// Example:
// Input: nums = [1, 5, 4, 2, 9, 9, 9], k = 3
// Output: 15
// Explanation: The window [5, 4, 2] sums to 11 and [4, 2, 9] sums to 15, the maximum valid sum.


