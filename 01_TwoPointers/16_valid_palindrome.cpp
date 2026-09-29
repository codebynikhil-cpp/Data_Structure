#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/valid-palindrome/
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i=0, j = n-1;
        while(i<j){
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++, j--;
        }
        return true;
    }
};

// Question: Valid Palindrome
// Summary: Check whether a string is a palindrome ignoring non-alphanumeric characters.
// Example:
// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: Ignoring spaces and punctuation, the string reads the same forward and backward.
