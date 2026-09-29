#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n = s.size();
        unordered_map<char, int> mp;
        int left = 0, right = 0;
        int res = -1;
        while(right < n){
            mp[s[right]]++;
            while(mp.size() > k){
                mp[s[left]]--;
                if(mp[s[left]] == 0) mp.erase(s[left]);
                left++;
            }
            if(mp.size() == k){
                res = max(res, right - left + 1);
            }
            right++;
        }
        return res;
    }
};

// Question: Longest Substring With Exactly K Unique Characters
// Summary: Find the longest substring containing exactly k distinct characters.
// Example:
// Input: s = "aabacbebebe", k = 3
// Output: 7
// Explanation: "cbebebe" is the longest substring containing exactly a, b, and e.


