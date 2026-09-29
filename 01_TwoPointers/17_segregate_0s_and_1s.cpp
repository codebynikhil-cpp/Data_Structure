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

// Question: 17 s e g r e g a t e 0 s a n d 1 s
// Example: 
// Input: [sample input]
// Output: [expected output]


