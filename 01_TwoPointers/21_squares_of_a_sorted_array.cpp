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

// Question: Squares of a Sorted Array
// Summary: Return a sorted array of squares from a sorted input array.
// Example:
// Input: nums = [-4, -1, 0, 3, 10]
// Output: [0, 1, 9, 16, 100]
// Explanation: Each number is squared and the result is sorted.
