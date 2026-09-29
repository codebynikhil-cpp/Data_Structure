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

// Question: Trapping Rain Water
// Summary: Calculate how much rainwater can be trapped between bars.
// Example:
// Input: height = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
// Output: 6
// Explanation: The trapped water is 6 units across the structure.
