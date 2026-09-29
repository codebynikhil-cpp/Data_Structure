#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/rearrange-array-elements-by-sign/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posIdx = 0;
        int negIdx = 1;
        vector<int> res(nums.size());
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                res[posIdx] = nums[i];
                posIdx += 2;
            }else{
                res[negIdx] = nums[i];
                negIdx += 2;
            }
        }
        return res;
    }
};

// Question: Rearrange Array Elements by Sign
// Summary: Rearrange positive and negative numbers alternately while preserving order.
// Example:
// Input: nums = [3, 1, -2, -5, 2, -4]
// Output: [3, -2, 1, -5, 2, -4]
// Explanation: Positive and negative values are placed alternately in the final arrangement.
