#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        string vowels = "aeiou";
        int cnt = 0;
        for(int i=0; i<k; i++){
            if(vowels.find(s[i]) != string::npos) {
                cnt++;
            }
        }
        int maxCount = cnt;
        for(int i=k; i<n; i++){
            if(vowels.find(s[i-k]) != string:: npos) cnt--;
            if(vowels.find(s[i]) != string:: npos) cnt++;
            maxCount = max(maxCount, cnt);
        }
        return maxCount;
    }
};


// Question: Maximum Number of Vowels in a Substring of Given Length
// Summary: Find the largest number of vowels in any substring of exactly k characters.
// Example:
// Input: s = "abciiidef", k = 3
// Output: 3
// Explanation: The substring "iii" contains three vowels, which is the maximum.


