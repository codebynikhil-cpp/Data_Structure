#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int idx = 1;
        bool flag = true;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                if(flag) nums[idx++] = nums[i];
                flag = false;
                
            }else{
                nums[idx++] = nums[i];
                flag = true;
            }
        }
        return idx;
    }
};
    // idx
// 1 1 1 1 1
    //  i
    //  cnt = 0
    //  1
// Question: 13 r e m o v e d u p l i c a t e s f r o m s o r t e d a r r a y i i
// Example: 
// Input: [sample input]
// Output: [expected output]


