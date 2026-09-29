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
// Question: 08 p a r t i t i o n a r r a y a c c o r d i n g t o g i v e n p i v o t
// Example: 
// Input: [sample input]
// Output: [expected output]


