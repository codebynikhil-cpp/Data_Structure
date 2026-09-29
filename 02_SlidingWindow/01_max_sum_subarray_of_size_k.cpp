#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int sum = 0;
        for(int i=0; i<k; i++) sum += arr[i];
        int maxSum = sum;
        for(int i=k; i<n; i++){
            sum += arr[i] - arr[i-k];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};

// Question: Maximum Sum Subarray of Size K
// Summary: Find the largest sum among all contiguous subarrays of exactly k elements.
// Example:
// Input: arr = [100, 200, 300, 400], k = 2
// Output: 700
// Explanation: The window [300, 400] has the maximum sum, 700.


