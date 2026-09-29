#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]) {
                nums[idx++] = nums[i];
            }
        }
        return idx;
    }
};

// Question: Remove Duplicates from Sorted Array
// Summary: Remove duplicate elements in place and return the length of the unique array.
// Example:
// Input: nums = [1, 1, 2]
// Output: 2
// Explanation: The array becomes [1, 2] and the unique length is 2.
