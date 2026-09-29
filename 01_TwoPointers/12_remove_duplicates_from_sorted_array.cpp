#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]) {
                nums[idx++] = nums[i];
            }
        }
        return idx;
    }
};
// Question: 12 r e m o v e d u p l i c a t e s f r o m s o r t e d a r r a y
// Example: 
// Input: [sample input]
// Output: [expected output]


