#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n  = arr.size();
        int left = 0 , right = n-1;
        int maxWater = 0;
        while(left < right){
            int height = min(arr[right], arr[left]);
            int width = right - left;
            maxWater = max(maxWater, height*width);
            if(arr[left] < arr[right]) left++;
            else right--;
        }
        return maxWater; 
    }
};

// Question: Container With Most Water
// Summary: Find the maximum area formed by two lines and the x-axis.
// Example:
// Input: height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
// Output: 49
// Explanation: The widest effective pair is height[1] and height[7], giving area 49.
