#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/find-all-anagrams-in-a-string/

class Solution {
public:
	vector<int> findAnagrams(string s, string p) {
		vector<int> answer;
		if (p.size() > s.size()) {
			return answer;
		}

		array<int, 26> required{};
		array<int, 26> window{};
		for (char ch : p) {
			required[ch - 'a']++;
		}

		for (int i = 0; i < static_cast<int>(s.size()); i++) {
			window[s[i] - 'a']++;
			if (i >= static_cast<int>(p.size())) {
				window[s[i - p.size()] - 'a']--;
			}
			if (i >= static_cast<int>(p.size()) - 1 && window == required) {
				answer.push_back(i - p.size() + 1);
			}
		}
		return answer;
	}
};


// Question: Find All Anagrams in a String
// Summary: Return every starting index where a substring of s is an anagram of p.
// Example:
// Input: s = "cbaebabacd", p = "abc"
// Output: [0, 6]
// Explanation: The substrings "cba" and "bac" are anagrams of "abc".


