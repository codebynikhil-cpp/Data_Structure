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

// Summary:
// Find the maximum element in every window of size k.
// Example: nums = [1,3,-1,-3,5,3,6,7], k = 3 -> windows produce [3,3,5,5,6,7].

