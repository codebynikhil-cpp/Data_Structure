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
// Question: 27 i n t e r s e c t i o n o f t w o a r r a y s i i
// Example: 
// Input: [sample input]
// Output: [expected output]


