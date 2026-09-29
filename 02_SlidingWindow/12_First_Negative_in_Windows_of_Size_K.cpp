#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // code here
        vector<int> negative;
        vector<int> ans;
        int n = arr.size();
        for(int i=0; i<k; i++){
            if(arr[i] < 0) negative.push_back(arr[i]);
        }
        if(!negative.empty()){
            ans.push_back(negative[0]);
        }else ans.push_back(0);
        for(int i=k; i<n; i++){
            if(arr[i] < 0) negative.push_back(arr[i]);
            if(arr[i-k] < 0) negative.erase(negative.begin());
            if(!negative.empty()){
                ans.push_back(negative[0]);
            }else ans.push_back(0);
        }
        return ans;
    }
};


// Question: First Negative Integer in Every Window of Size K
// Summary: Return the first negative value in each contiguous window of size k, or 0 if none exists.
// Example:
// Input: arr = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
// Output: [-1, -1, -7, -15, -15, 0]
// Explanation: Each output value is the first negative number encountered in its corresponding window.


