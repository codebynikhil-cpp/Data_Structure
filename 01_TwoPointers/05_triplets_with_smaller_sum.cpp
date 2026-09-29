#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1
class Solution {
  public:
    int countTriplets(int target, vector<int>& nums) {
        // code here
        int n = nums.size();
        int ans=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++){
            if(i > 0 && nums[i]==nums[i-1]) continue;
            int left = i+1, right = n-1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum < target){
                    ans += right - left;
                    left++;
                }else{
                    right--;
                }
            }
        }
        return ans;
    }
};

// Question: Triplets with Smaller Sum
// Summary: Count triplets whose sum is less than the target.
// Example:
// Input: nums = [5, 1, 3, 4, 2], target = 12
// Output: 4
// Explanation: Valid triplets are (1, 2, 3), (1, 2, 4), (1, 2, 5), (1, 3, 4).
