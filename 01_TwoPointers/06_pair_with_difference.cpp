#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1


class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        int n = arr.size();
        int i = 0, j = 1;
        
        sort(arr.begin(), arr.end());
        
        while(i<n && j<n){
            int diff = arr[j] - arr[i];
            if(diff == x && i!=j) return true;
            else if(diff < x) j++;
            else i++;
            // if(i==j) j++;
        }
        return false;
    }
};

// Question: Pair with Difference
// Summary: Check whether there exists a pair with the given difference.
// Example:
// Input: nums = [5, 10, 3, 2, 100, 9], diff = 3
// Output: true
// Explanation: 5 - 2 = 3, so the pair exists.
