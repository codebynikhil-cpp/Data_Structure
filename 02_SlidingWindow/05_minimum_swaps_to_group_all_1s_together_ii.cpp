#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int k = 0;
        int n = nums.size();
        nums.insert(nums.end(), nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(nums[i] == 1) k++;
        }

        int ans = 0, sum = 0, minSwap = INT_MAX;
        for(int i = 0; i<k; i++) sum += nums[i];
        for(int i = k; i<2*n; i++){
            ans = k - sum;
            minSwap = min(minSwap, ans);
            sum += nums[i] - nums[i-k];
        }
        return minSwap;
    }
};


// Question: Minimum Swaps to Group All 1s Together II
// Summary: Find the minimum swaps needed to place all 1s next to one another in a circular binary array.
// Example:
// Input: nums = [1, 0, 1, 0, 1]
// Output: 1
// Explanation: Swapping one zero with a one groups the three 1s into one circular window.


