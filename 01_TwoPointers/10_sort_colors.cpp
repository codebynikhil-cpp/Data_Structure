#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int low = 0,mid = 0, high = n-1;
        while(mid <= high){
            if(arr[mid] == 0) swap(arr[low++], arr[mid++]);
            else if(arr[mid]==1) mid++;
            else swap(arr[mid], arr[high--]);
        }
    }
};

// Question: Sort Colors
// Summary: Sort the array containing only 0, 1, and 2.
// Example:
// Input: nums = [2, 0, 2, 1, 1, 0]
// Output: [0, 0, 1, 1, 2, 2]
// Explanation: The array is grouped by color value in ascending order.
