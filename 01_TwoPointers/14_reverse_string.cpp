#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/reverse-string/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i=0, j = n-1;
        while(i < j){
            swap(s[i++], s[j--]);
        }
    }
};

// Question: Reverse String
// Summary: Reverse the characters of a string in place.
// Example:
// Input: s = ["h", "e", "l", "l", "o"]
// Output: ["o", "l", "l", "e", "h"]
// Explanation: The string is reversed from left to right.
