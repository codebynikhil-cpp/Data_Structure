#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int idx = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == 0) swap(arr[i], arr[idx++]);  
        }
    }
};

// Question: Segregate 0s and 1s
// Summary: Arrange all zeros before ones in a binary array.
// Example:
// Input: nums = [0, 1, 0, 1, 1, 0]
// Output: [0, 0, 0, 1, 1, 1]
// Explanation: All 0s are moved to the front while 1s stay after them.
