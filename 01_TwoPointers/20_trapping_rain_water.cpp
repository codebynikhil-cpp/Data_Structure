#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        vector<int> leftMax(height.begin(), height.end());
        vector<int> rightMax(height.begin(), height.end());
        for(int i=1; i<n; i++){
            leftMax[i] = max(leftMax[i-1], leftMax[i]);
        }
        for(int i=n-2; i>=0; i--){
            rightMax[i] = max(rightMax[i+1], rightMax[i]);
        }
        for(int i=0; i<n; i++){
            ans += min(leftMax[i], rightMax[i]) - height[i];
        }
        return ans;
    }
};

// Question: 20 t r a p p i n g r a i n w a t e r
// Example: 
// Input: [sample input]
// Output: [expected output]


