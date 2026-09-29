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
// Question: 11 r e m o v e e l e m e n t
// Example: 
// Input: [sample input]
// Output: [expected output]


