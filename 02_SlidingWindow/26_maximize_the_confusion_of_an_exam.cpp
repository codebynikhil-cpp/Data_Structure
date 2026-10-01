#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/maximize-the-confusion-of-an-exam/

class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
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


// Question: Maximize the Confusion of an Exam
// Summary: Find the longest answer-key substring that can be made all T or all F using at most k changes.
// Example:
// Input: answerKey = "TTFTTFTT", k = 1
// Output: 5
// Explanation: Changing one F makes the substring "TTFTT" contain five identical answers.


