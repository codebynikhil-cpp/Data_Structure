#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0) {
                swap(nums[idx++], nums[i]);
            }
        }
    }
};

// Question: Move Zeroes
// Summary: Move all zeroes to the end while keeping non-zero elements in order.
// Example:
// Input: nums = [0, 1, 0, 3, 12]
// Output: [1, 3, 12, 0, 0]
// Explanation: Non-zero values are shifted left while zeros are pushed to the end.
