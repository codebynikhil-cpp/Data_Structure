#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
	bool checkInclusion(string s1, string s2) {
		if (s1.size() > s2.size()) {
			return false;
		}

		array<int, 26> required{};
		array<int, 26> window{};
		for (char ch : s1) {
			required[ch - 'a']++;
		}

		for (int i = 0; i < static_cast<int>(s2.size()); i++) {
			window[s2[i] - 'a']++;
			if (i >= static_cast<int>(s1.size())) {
				window[s2[i - s1.size()] - 'a']--;
			}
			if (i >= static_cast<int>(s1.size()) - 1 && window == required) {
				return true;
			}
		}
		return false;
	}
};


// Question: Permutation in String
// Summary: Determine whether s2 contains a substring that is a permutation of s1.
// Example:
// Input: s1 = "ab", s2 = "eidbaooo"
// Output: true
// Explanation: The substring "ba" is a permutation of "ab".


