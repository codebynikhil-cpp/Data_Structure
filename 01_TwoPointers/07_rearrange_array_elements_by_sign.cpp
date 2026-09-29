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
// Question: 07 r e a r r a n g e a r r a y e l e m e n t s b y s i g n
// Example: 
// Input: [sample input]
// Output: [expected output]


