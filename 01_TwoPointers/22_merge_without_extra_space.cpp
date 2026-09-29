#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size(), m = b.size();
        int left = n-1, right = 0;
        
        while(left >= 0 && right < m){
            if(a[left] > b[right]){
                swap(a[left], b[right]);
            }
            left--;
            right++;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};

// Question: Merge Without Extra Space
// Summary: Merge two sorted arrays into one sorted array without using extra space.
// Example:
// Input: a = [1, 3, 5], b = [2, 4, 6]
// Output: [1, 2, 3, 4, 5, 6]
// Explanation: The arrays are merged in sorted order with no extra array.
