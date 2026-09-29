#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/maximum-average-subarray-i/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        for(int i=0; i<k; i++) sum += nums[i];
        double avg = sum/k;
        double maxAvg = avg;
        for(int i=k; i<n; i++){
            sum += nums[i] - nums[i-k];
            avg = (sum / k);
            maxAvg = max(maxAvg, avg);
        }
        return maxAvg;
    }
};


// Question: Maximum Average Subarray I
// Summary: Find the maximum average of any contiguous subarray containing exactly k elements.
// Example:
// Input: nums = [1, 12, -5, -6, 50, 3], k = 4
// Output: 12.75
// Explanation: [12, -5, -6, 50] has sum 51, so its average is 51 / 4 = 12.75.


