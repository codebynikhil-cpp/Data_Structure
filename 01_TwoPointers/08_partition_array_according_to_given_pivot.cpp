#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/partition-array-according-to-given-pivot/
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> result(n, pivot);
        int left = 0, right = n-1;
        for(int i=0, j = n-1; i<nums.size(); i++, j--){
            if(nums[i] < pivot){
                result[left] = nums[i];
                left++;
            }
            if(nums[j] > pivot){
                result[right] = nums[j];
                right--;
            }
        }
        // while(left <= right) result[left++] = pivot;
        return result; 
    }
};

// Question: Partition Array According to Given Pivot
// Summary: Rearrange array such that elements less than pivot come first, then equal, then greater.
// Example:
// Input: nums = [9, 12, 5, 10, 14, 3, 10], pivot = 10
// Output: [9, 5, 3, 10, 10, 12, 14]
// Explanation: All values smaller than 10 move left, equal values stay in the middle, and larger values move right.
