#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/grumpy-bookstore-owner/

class Solution {
public:
	int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
		int alwaysSatisfied = 0;
		int recoverable = 0;
		int bestRecoverable = 0;

		for (int i = 0; i < static_cast<int>(customers.size()); i++) {
			if (grumpy[i] == 0) {
				alwaysSatisfied += customers[i];
			} else {
				recoverable += customers[i];
			}
			if (i >= minutes && grumpy[i - minutes] == 1) {
				recoverable -= customers[i - minutes];
			}
			bestRecoverable = max(bestRecoverable, recoverable);
		}
		return alwaysSatisfied + bestRecoverable;
	}
};


// Question: Grumpy Bookstore Owner
// Summary: Maximize satisfied customers by choosing one interval of length minutes in which the owner uses a secret technique.
// Example:
// Input: customers = [1, 0, 1, 2, 1, 1, 7, 5], grumpy = [0, 1, 0, 1, 0, 1, 0, 1], minutes = 3
// Output: 16
// Explanation: Applying the technique during the best three-minute window makes 16 customers satisfied.


