#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/segregate-even-and-odd-numbers4629/1
class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        // code here
        int idx = 0;
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++){
            if(arr[i] % 2 == 0) {
                swap(arr[i], arr[idx]);
                idx++;
            }
        }
        sort(arr.begin()+idx, arr.end());
    }
};

// Question: Segregate Even and Odd Numbers
// Summary: Put all even numbers before odd numbers.
// Example:
// Input: nums = [3, 1, 2, 4, 5, 6]
// Output: [2, 4, 6, 3, 1, 5]
// Explanation: Even numbers are grouped on the left side and odd numbers on the right.
