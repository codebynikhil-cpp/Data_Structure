#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = n-1, k=n-1;
        vector<int> res(n, 0);
        while(i <= j){
            if(abs(nums[i]) < abs(nums[j])){
                res[k--] = nums[j] * nums[j];
                j--; 
            }else{
                res[k--] = nums[i] * nums[i];
                i++;
            }
        }
        return res;
    }
};

// Question: 21 s q u a r e s o f a s o r t e d a r r a y
// Example: 
// Input: [sample input]
// Output: [expected output]


