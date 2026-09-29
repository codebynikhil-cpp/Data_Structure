#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = -1, right = -1;
        int maxEle = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i] < maxEle) right = i;
            maxEle = max(maxEle, nums[i]);
        }
        int minEle = nums[n-1];
        for(int i=n-2; i>=0; i--){
            if(nums[i] > minEle) left = i;
            minEle = min(minEle, nums[i]);
        }
        return left == -1 ? 0 : right - left + 1;
    }
};
// Question: 30 s h o r t e s t u n s o r t e d c o n t i n u o u s s u b a r r a y
// Example: 
// Input: [sample input]
// Output: [expected output]


