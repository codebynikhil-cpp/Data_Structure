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

// Question: Palindrome Array
// Summary: Check whether the array reads the same from both ends.
// Example:
// Input: arr = [1, 2, 3, 2, 1]
// Output: true
// Explanation: The array is symmetric, so it is a palindrome.
