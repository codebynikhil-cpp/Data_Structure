#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/intersection-of-two-arrays/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int> res;
        int n = nums1.size();
        int m = nums2.size();
        
        int i=0, j=0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        while(i<n && j<m){
            if(nums1[i] == nums2[j]){
                if(res.empty() || res.back() != nums1[i]) res.push_back(nums1[i]);
                i++,j++;
            }else if(nums1[i] < nums2[j]) i++;
            else j++;
        }
        
        return res; 
    }
};

// Question: Intersection of Two Arrays
// Summary: Find the common elements between two arrays without duplicates.
// Example:
// Input: nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
// Output: [4, 9]
// Explanation: The common values are 4 and 9, with duplicates removed.
