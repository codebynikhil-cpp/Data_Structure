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
// Question: 02 3 s u m
// Example: 
// Input: [sample input]
// Output: [expected output]


