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
// Question: 09 m o v e z e r o e s
// Example: 
// Input: [sample input]
// Output: [expected output]


