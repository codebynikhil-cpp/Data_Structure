#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = m-1, right = n-1, last = m+n-1;
        while(left >= 0 && right >= 0){
            if(nums1[left] > nums2[right]) 
                nums1[last--] = nums1[left--];
            else 
                nums1[last--] = nums2[right--];
        }
        while(right >= 0) nums1[last--] = nums2[right--];
    }
};

// Question: Merge Sorted Array
// Summary: Merge two sorted arrays into a single sorted array in-place.
// Example:
// Input: nums1 = [1, 2, 3, 0, 0, 0], m = 3, nums2 = [2, 5, 6], n = 3
// Output: [1, 2, 2, 3, 5, 6]
// Explanation: The final array is sorted and contains all values from both input arrays.
