#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/maximum-average-subarray-i/

class Solution {
public:
	double findMaxAverage(vector<int>& nums, int k) {
		long long windowSum = 0;
		for (int i = 0; i < k; i++) {
			windowSum += nums[i];
		}

		long long bestSum = windowSum;
		for (int i = k; i < static_cast<int>(nums.size()); i++) {
			windowSum += nums[i] - nums[i - k];
			bestSum = max(bestSum, windowSum);
		}
		return static_cast<double>(bestSum) / k;
	}
};


// Question: Maximum Average Subarray I
// Summary: Find the maximum average of any contiguous subarray containing exactly k elements.
// Example:
// Input: nums = [1, 12, -5, -6, 50, 3], k = 4
// Output: 12.75
// Explanation: [12, -5, -6, 50] has sum 51, so its average is 51 / 4 = 12.75.


