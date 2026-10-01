#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/minimum-window-substring/

class Solution {
public:
    bool valid(vector<int>&freq, vector<int>& mp){
        for(int i=0; i<256; i++){
            if(freq[i] > mp[i]) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        int n = s.size();
        vector<int> freq(256,0), mp(256,0);
        int res = INT_MAX, start = 0;
        int left = 0, right = 0;
        for(auto& c: t) freq[c]++;
        while(right < n){
            mp[s[right]]++;
            while(valid(freq, mp)){
                int len = right - left + 1;
                if(res > len){
                    res = len;
                    start = left;
                }
                mp[s[left]]--;
                left++;
            }
            right++;
        }
        if(res == INT_MAX) return "";
        return s.substr(start, res);
    }
};

// Question: Minimum Window Substring
// Summary: Find the shortest substring of s containing every character of t with the required frequencies.
// Example:
// Input: s = "ADOBECODEBANC", t = "ABC"
// Output: "BANC"
// Explanation: "BANC" is the smallest window containing A, B, and C.


