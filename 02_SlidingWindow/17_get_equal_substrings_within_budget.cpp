#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/get-equal-substrings-within-budget/
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int left = 0, right = 0;
        int cost = 0, ans = 0;
        while(right < n){
            cost += abs((s[right]-'a') - (t[right]-'a')) ;
            while(cost > maxCost){
                cost -= abs((s[left]-'a') - (t[left]-'a'));;
                left++;
            }
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};

// Question: Get Equal Substrings Within Budget
// Summary: Find the longest substring that can be changed from s to t without exceeding maxCost.
// Example:
// Input: s = "abcd", t = "bcdf", maxCost = 3
// Output: 3
// Explanation: Changing "abc" to "bcd" costs 1 + 1 + 1 = 3, while a longer window exceeds the budget.


