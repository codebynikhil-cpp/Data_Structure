#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/reschedule-meetings-for-maximum-free-time-i/

class Solution {
public:
	int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
		int n = startTime.size();
		vector<int> gaps(n + 1);
		gaps[0] = startTime[0];
		for (int i = 1; i < n; i++) {
			gaps[i] = startTime[i] - endTime[i - 1];
		}
		gaps[n] = eventTime - endTime[n - 1];

		int answer = 0;
		for (int i = 0; i < n; i++) {
			answer = max(answer, gaps[i] + gaps[i + 1]);
		}
		return answer;
	}
};


// Question: Reschedule Meetings for Maximum Free Time I
// Summary: Reschedule at most one meeting while keeping meeting durations and order to maximize a free interval.
// Example:
// Input: eventTime = 10, startTime = [0, 3, 7], endTime = [1, 4, 8]
// Output: 4
// Explanation: Moving the middle meeting can create a continuous free interval of length 4.


