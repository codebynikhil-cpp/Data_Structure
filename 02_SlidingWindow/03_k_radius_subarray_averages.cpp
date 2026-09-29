#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/k-radius-subarray-averages/

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n,-1);
        long long sum = 0;
        if(2*k+1 > n) return ans;
        for(int i=0; i<=2*k ; i++) sum += nums[i];
        for(int i=k; i<n-k; i++){
            int num = sum / (2*k+1);
            if(i+k+1 < n) sum += nums[i+k+1] - nums[i-k];
            ans[i] = num;
        }
        return ans;
    }
};

// Question: K Radius Subarray Averages
// Summary: For each index, calculate the average of the subarray centered at that index with radius k.
// Example:
// Input: nums = [7, 4, 3, 9, 1, 8, 5, 2, 6], k = 3
// Output: [-1, -1, -1, 5, 4, -1, -1, -1, -1]
// Explanation: The average centered at index 3 is (4 + 3 + 9 + 1 + 8 + 5 + 2) / 7 = 4.


