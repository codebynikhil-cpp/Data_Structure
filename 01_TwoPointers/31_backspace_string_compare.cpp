#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/backspace-string-compare/
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=s.size()-1, j = t.size()-1;
        int skipS = 0, skipT = 0;

        while (i >= 0 || j >= 0) {
            while (i >= 0) {
                if (s[i] == '#') skipS++, i--;
                else if (skipS) skipS--, i--;
                else break;
            }

            while (j >= 0) {
                if (t[j] == '#') skipT++, j--;
                else if (skipT) skipT--, j--;
                else break;
            }

            if (i >= 0 && j >= 0 && s[i] != t[j])
                return false;

            if ((i >= 0) != (j >= 0))
                return false;

            i--;
            j--;
        }
        return true;
    }
};

// Question: Backspace String Compare
// Summary: Compare two strings after applying backspace operations.
// Example:
// Input: s = "ab#c", t = "ad#c"
// Output: true
// Explanation: Both strings reduce to "ac" after processing backspaces.
