#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/find-the-power-of-k-size-subarrays-i/
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int> ans;
        if(k==1) return nums;
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]+1) count++;
            else count = 0;
            if(i>=k-1){
                if(count >= k-1){
                    ans.push_back(nums[i]);
                }else ans.push_back(-1);
            }
        }
        return ans;
    }
};

// Summary:
// For each window of length k, return the maximum value if the subarray is strictly increasing.
// Example: nums = [1,2,3,4,5], k = 3 -> [1,2,3] -> 3, [2,3,4] -> 4, [3,4,5] -> 5.


