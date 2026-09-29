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
// Question: 23 m e r g e s o r t e d a r r a y
// Example: 
// Input: [sample input]
// Output: [expected output]


