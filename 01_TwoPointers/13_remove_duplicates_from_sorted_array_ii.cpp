#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int idx = 1;
        bool flag = true;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                if(flag) nums[idx++] = nums[i];
                flag = false;
                
            }else{
                nums[idx++] = nums[i];
                flag = true;
            }
        }
        return idx;
    }
};

// Question: Remove Duplicates from Sorted Array II
// Summary: Allow at most two duplicates and keep the first two of each value.
// Example:
// Input: nums = [1, 1, 1, 2, 2, 3]
// Output: [1, 1, 2, 2, 3]
// Explanation: The valid result keeps at most two copies of each number.
