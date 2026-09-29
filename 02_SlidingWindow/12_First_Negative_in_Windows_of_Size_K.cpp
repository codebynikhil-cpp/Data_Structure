#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

class Solution {
  public:
	vector<int> printFirstNegativeInteger(vector<int> &arr, int k) {
		deque<int> negativeIndices;
		vector<int> answer;

		for (int i = 0; i < static_cast<int>(arr.size()); i++) {
			if (arr[i] < 0) {
				negativeIndices.push_back(i);
			}
			while (!negativeIndices.empty() && negativeIndices.front() <= i - k) {
				negativeIndices.pop_front();
			}
			if (i >= k - 1) {
				answer.push_back(negativeIndices.empty() ? 0 : arr[negativeIndices.front()]);
			}
		}
		return answer;
	}
};


// Question: First Negative Integer in Every Window of Size K
// Summary: Return the first negative value in each contiguous window of size k, or 0 if none exists.
// Example:
// Input: arr = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
// Output: [-1, -1, -7, -15, -15, 0]
// Explanation: Each output value is the first negative number encountered in its corresponding window.


