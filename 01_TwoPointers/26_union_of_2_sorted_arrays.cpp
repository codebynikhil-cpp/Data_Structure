#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> res;
        int n = a.size();
        int m = b.size();
        
        int i=0, j=0;
        
        while(i<n && j<m){
            int num = min(a[i], b[j]);
            if(a[i] < b[j]) i++;
            else if(a[i] > b[j]) j++;
            else i++, j++;
            
            if(res.empty() || res.back() != num) res.push_back(num);
        }
        
        while(i<n){
            if(res.empty() || res.back() != a[i]) 
                res.push_back(a[i]);
            i++;
        }
        
        while(j<m){
            if(res.empty() || res.back() != b[j]) res.push_back(b[j]);
            j++;
        }
        
        return res;
    }
};

// Question: Union of Two Sorted Arrays
// Summary: Find the union of two sorted arrays without duplicates.
// Example:
// Input: a = [1, 2, 3, 4], b = [2, 4, 6]
// Output: [1, 2, 3, 4, 6]
// Explanation: The union contains all distinct values in sorted order.
