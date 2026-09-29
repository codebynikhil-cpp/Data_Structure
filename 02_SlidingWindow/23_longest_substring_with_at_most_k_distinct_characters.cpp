#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/
#include <unordered_map>
int kDistinctChars(int k, string &str)
{
    // Write your code here
    int n = str.size();
    unordered_map<char, int> mp;
    int left = 0, right = 0;
    int res = 0;
    while(right < n){
        mp[str[right]]++;
        while(mp.size() > k){
            mp[str[left]]--;
            if(mp[str[left]] == 0) mp.erase(str[left]);
            left++;
        }
        res = max(res, right - left + 1);
        right++;
    }
    return res;
}




// Question: Longest Substring With At Most K Distinct Characters
// Summary: Find the longest substring containing no more than k distinct characters.
// Example:
// Input: str = "eceba", k = 2
// Output: 3
// Explanation: "ece" is the longest valid substring because it contains only e and c.


