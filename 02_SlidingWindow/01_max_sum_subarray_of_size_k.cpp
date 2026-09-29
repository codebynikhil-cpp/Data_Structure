#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

class Solution {
  public:
	long long maximumSumSubarray(int k, vector<int> &arr, int n) {
		long long windowSum = 0;
		long long bestSum = LLONG_MIN;

		for (int i = 0; i < n; i++) {
			windowSum += arr[i];
			if (i >= k) {
				windowSum -= arr[i - k];
			}
			if (i >= k - 1) {
				bestSum = max(bestSum, windowSum);
			}
		}
		return bestSum;
	}
};


// Question: Maximum Sum Subarray of Size K
// Summary: Find the largest sum among all contiguous subarrays of exactly k elements.
// Example:
// Input: arr = [100, 200, 300, 400], k = 2
// Output: 700
// Explanation: The window [300, 400] has the maximum sum, 700.


