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
// Question: 05 t r i p l e t s w i t h s m a l l e r s u m
// Example: 
// Input: [sample input]
// Output: [expected output]


