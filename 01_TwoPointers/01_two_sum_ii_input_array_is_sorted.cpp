#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0, j = n-1;
        while(i < j){
            if(nums[i] + nums[j] == target) return {i+1,j+1};
            else if(nums[i]+nums[j] < target) i++;
            else j--;
        }
        return {};
    }
};
// Question: 01 t w o s u m i i i n p u t a r r a y i s s o r t e d
// Example: 
// Input: [sample input]
// Output: [expected output]


