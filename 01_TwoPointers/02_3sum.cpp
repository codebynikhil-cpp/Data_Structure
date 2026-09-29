#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/3sum/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; i++){
            if(i > 0 && nums[i]==nums[i-1]) continue;
            int left = i+1, right = n-1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == 0){
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1]) left++;
                    while(left < right && nums[right] == nums[right+1]) right--;
                }else if(sum < 0) left++;
                else right --;
            }
        }
        return ans;
    }
};

// Question: 3Sum
// Summary: Find all unique triplets in an array that sum to zero.
// Example:
// Input: nums = [-1, 0, 1, 2, -1, -4]
// Output: [[-1, -1, 2], [-1, 0, 1]]
// Explanation: These are the only unique triplets whose sum is zero.
