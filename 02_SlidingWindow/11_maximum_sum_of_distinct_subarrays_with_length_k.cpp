#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/

class Solution {
public:
	long long maximumSubarraySum(vector<int>& nums, int k) {
		unordered_map<int, int> frequency;
		long long windowSum = 0;
		long long answer = 0;

		for (int i = 0; i < static_cast<int>(nums.size()); i++) {
			windowSum += nums[i];
			frequency[nums[i]]++;
			if (i >= k) {
				windowSum -= nums[i - k];
				if (--frequency[nums[i - k]] == 0) {
					frequency.erase(nums[i - k]);
				}
			}
			if (i >= k - 1 && frequency.size() == static_cast<size_t>(k)) {
				answer = max(answer, windowSum);
			}
		}
		return answer;
	}
};


// Question: Maximum Sum of Distinct Subarrays With Length K
// Summary: Find the largest sum of a length-k subarray whose values are all distinct.
// Example:
// Input: nums = [1, 5, 4, 2, 9, 9, 9], k = 3
// Output: 15
// Explanation: The window [5, 4, 2] sums to 11 and [4, 2, 9] sums to 15, the maximum valid sum.


