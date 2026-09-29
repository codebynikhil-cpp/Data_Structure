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
// Question: 28 i n t e r s e c t i o n o f t w o a r r a y s
// Example: 
// Input: [sample input]
// Output: [expected output]


