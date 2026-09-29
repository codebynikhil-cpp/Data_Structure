#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/find-all-anagrams-in-a-string/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> freq1(26, 0), freq2(26, 0);
        int n = p.size();
        for(auto& ch: p) freq2[ch-'a']++;
        for(int i=0; i<s.size(); i++){
            freq1[s[i] - 'a']++;
            if(i>=n) freq1[s[i-n] - 'a']--;
            if(freq1 == freq2) ans.push_back(i-n+1);
        }
        return ans;
    }
};


// Question: Find All Anagrams in a String
// Summary: Return every starting index where a substring of s is an anagram of p.
// Example:
// Input: s = "cbaebabacd", p = "abc"
// Output: [0, 6]
// Explanation: The substrings "cba" and "bac" are anagrams of "abc".


