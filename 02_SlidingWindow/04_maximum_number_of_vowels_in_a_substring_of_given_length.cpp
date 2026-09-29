#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

class Solution {
public:
	int maxVowels(string s, int k) {
		auto isVowel = [](char ch) {
			return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
		};

		int vowelCount = 0;
		int bestCount = 0;
		for (int i = 0; i < static_cast<int>(s.size()); i++) {
			vowelCount += isVowel(s[i]);
			if (i >= k) {
				vowelCount -= isVowel(s[i - k]);
			}
			if (i >= k - 1) {
				bestCount = max(bestCount, vowelCount);
			}
		}
		return bestCount;
	}
};


// Question: Maximum Number of Vowels in a Substring of Given Length
// Summary: Find the largest number of vowels in any substring of exactly k characters.
// Example:
// Input: s = "abciiidef", k = 3
// Output: 3
// Explanation: The substring "iii" contains three vowels, which is the maximum.


