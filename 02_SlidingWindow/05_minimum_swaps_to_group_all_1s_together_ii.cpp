#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/

class Solution {
public:
	int minSwaps(vector<int>& nums) {
		int ones = accumulate(nums.begin(), nums.end(), 0);
		if (ones <= 1) {
			return 0;
		}

		int zeros = 0;
		int bestZeros = nums.size();
		for (int i = 0; i < static_cast<int>(nums.size()) + ones - 1; i++) {
			if (nums[i % nums.size()] == 0) {
				zeros++;
			}
			if (i >= ones) {
				zeros -= nums[(i - ones) % nums.size()] == 0;
			}
			if (i >= ones - 1) {
				bestZeros = min(bestZeros, zeros);
			}
		}
		return bestZeros;
	}
};


// Question: Minimum Swaps to Group All 1s Together II
// Summary: Find the minimum swaps needed to place all 1s next to one another in a circular binary array.
// Example:
// Input: nums = [1, 0, 1, 0, 1]
// Output: 1
// Explanation: Swapping one zero with a one groups the three 1s into one circular window.


