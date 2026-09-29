#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/remove-element/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[idx++] = nums[i];
            }
        }
        return idx;
    }
};

// Question: Remove Element
// Summary: Remove all occurrences of a given value and return the new length.
// Example:
// Input: nums = [3, 2, 2, 3], val = 3
// Output: 2
// Explanation: After removing 3s, the array becomes [2, 2] with length 2.
