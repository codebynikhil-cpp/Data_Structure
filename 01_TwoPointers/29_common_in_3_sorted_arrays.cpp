#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/common-elements1132/1
class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        // code here
        int i=0, j=0, k=0;
        vector<int> res;
        while(i<a.size() && j<b.size() && k<c.size()){
            if(a[i] == b[j] && b[j] == c[k]){
                if(res.empty() || res.back() != a[i]) res.push_back(a[i]);
                i++, j++, k++;
            }
            else if(a[i] < b[j]) i++;
            else if(b[j] < c[k]) j++;
            else k++;
        }
        return res;
    }
};

// Question: Common in 3 Sorted Arrays
// Summary: Find the common elements present in all three sorted arrays.
// Example:
// Input: a = [1, 5, 10], b = [1, 3, 5, 7], c = [1, 5, 9, 10]
// Output: [1, 5]
// Explanation: 1 and 5 appear in all three arrays.
