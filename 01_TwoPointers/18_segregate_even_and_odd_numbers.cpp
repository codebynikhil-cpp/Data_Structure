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
//   idx
//          i
// //8 12 9 3 24 45 90
// Question: 18 s e g r e g a t e e v e n a n d o d d n u m b e r s
// Example: 
// Input: [sample input]
// Output: [expected output]


