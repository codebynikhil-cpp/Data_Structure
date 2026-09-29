#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/k-radius-subarray-averages/

class Solution {
public:
	vector<int> getAverages(vector<int>& nums, int k) {
		int n = nums.size();
		vector<int> averages(n, -1);
		if (k == 0) {
			return nums;
		}
		if (2 * k + 1 > n) {
			return averages;
		}

		long long windowSum = 0;
		int windowSize = 2 * k + 1;
		for (int i = 0; i < n; i++) {
			windowSum += nums[i];
			if (i >= windowSize) {
				windowSum -= nums[i - windowSize];
			}
			if (i >= windowSize - 1) {
				averages[i - k] = static_cast<int>(windowSum / windowSize);
			}
		}
		return averages;
	}
};


// Question: K Radius Subarray Averages
// Summary: For each index, calculate the average of the subarray centered at that index with radius k.
// Example:
// Input: nums = [7, 4, 3, 9, 1, 8, 5, 2, 6], k = 3
// Output: [-1, -1, -1, 5, 4, -1, -1, -1, -1]
// Explanation: The average centered at index 3 is (4 + 3 + 9 + 1 + 8 + 5 + 2) / 7 = 4.


