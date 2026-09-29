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
// Question: 16 v a l i d p a l i n d r o m e
// Example: 
// Input: [sample input]
// Output: [expected output]


