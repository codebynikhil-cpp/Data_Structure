#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1

class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        // code here
        // unordered_map<int, int> mp;
        // for(auto& it: b) mp[it]++;
        // for(auto& it: a) mp[it]--;
        // for(auto& it: mp) if(it.second > 0) return false;
        // return true
        
        int n = a.size(), m = b.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int i=0, j=0;
        while(i < n && j < m){
            if(a[i] < b[j]) i++;
            else if(a[i] == b[j]) i++,j++;
            else return false;
        }
        return j==m;
    }
};

// Question: 24 a r r a y s u b s e t
// Example: 
// Input: [sample input]
// Output: [expected output]


