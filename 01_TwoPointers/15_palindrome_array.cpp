#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/perfect-arrays4645/1
class Solution {
  public:
    bool isPalindrome(vector<int> &arr) {
        // code here
        int n = arr.size();
        int i=0, j=n-1;
        while(i<j){
            if(arr[i++] != arr[j--]) return false;
        }
        return true;
    }
};

// Question: 15 p a l i n d r o m e a r r a y
// Example: 
// Input: [sample input]
// Output: [expected output]


