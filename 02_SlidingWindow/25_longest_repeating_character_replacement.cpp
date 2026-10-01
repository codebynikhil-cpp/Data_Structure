#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/longest-repeating-character-replacement/

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        unordered_map<char, int> mp;
        int res = 0, maxFreq = 0;
        int left = 0, right = 0;
        while(right < n){
            mp[s[right]]++;
            maxFreq = max(maxFreq, mp[s[right]]);
            while((right-left+1) - maxFreq > k){
                mp[s[left]]--;
                if(mp[s[left]] == 0) mp.erase(s[left]);
                left++;
            }
            res = max(res, right - left + 1);
            right++;
        }
        return res;
    }
};

// Question: Longest Repeating Character Replacement
// Summary: Find the longest substring that can be changed into one repeated character using at most k replacements.
// Example:
// Input: s = "AABABBA", k = 1
// Output: 4
// Explanation: Replacing one B in "AABA" produces four consecutive A characters.


