#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

class Solution {
  public:
    int search(string &p, string &s) {
        // code here
        int ans =0 ;
        vector<int> freq1(26, 0), freq2(26, 0);
        int n = p.size();
        for(auto& ch: p) freq2[ch-'a']++;
        for(int i=0; i<s.size(); i++){
            freq1[s[i] - 'a']++;
            if(i>=n) freq1[s[i-n] - 'a']--;
            if(freq1 == freq2) ans++;
        }
        return ans;
    }
};

// Question: Count Occurrences of Anagrams
// Summary: Count the substrings of a text that are anagrams of a given pattern.
// Example:
// Input: text = "forxxorfxdofr", pattern = "for"
// Output: 3
// Explanation: The anagram windows are "for", "orf", and "ofr".


