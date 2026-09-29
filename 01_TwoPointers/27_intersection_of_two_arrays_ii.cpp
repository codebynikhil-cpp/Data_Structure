#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/intersection-of-two-arrays-ii/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        // if(n < m) intersect(nums2, nums1);
        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0, j=0; 
        while(i<n && j<m){
            if(nums1[i] == nums2[j]) {
                res.push_back(nums2[j]);
                i++, j++;
            }else if(nums1[i] < nums2[j]){
                i++;
            }else{
                j++;
            }
        }
        return res;
    }
};

// Question: Intersection of Two Arrays II
// Summary: Return the common elements between two arrays, including duplicates.
// Example:
// Input: nums1 = [1, 2, 2, 1], nums2 = [2, 2]
// Output: [2, 2]
// Explanation: The intersection includes the repeated matching value twice.
