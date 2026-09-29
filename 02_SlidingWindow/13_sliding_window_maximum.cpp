#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/sliding-window-maximum/
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(!dq.empty() && dq.front() <= i-k ) dq.pop_front();
            while(!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back();
            dq.push_back(i);
            if(i >= k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};

// Question: Sliding Window Maximum
// Summary: Return the maximum value from every contiguous window of size k.
// Example:
// Input: nums = [1, 3, -1, -3, 5, 3, 6, 7], k = 3
// Output: [3, 3, 5, 5, 6, 7]
// Explanation: A deque keeps the largest candidate at the front for each window.


