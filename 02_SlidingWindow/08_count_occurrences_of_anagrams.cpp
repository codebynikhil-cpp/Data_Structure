#include <bits/stdc++.h>
using namespace std;

// URL: https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

class Solution {
  public:
	int search(string &pat, string &txt) {
		if (pat.size() > txt.size()) {
			return 0;
		}

		array<int, 256> required{};
		array<int, 256> window{};
		for (char ch : pat) {
			required[static_cast<unsigned char>(ch)]++;
		}

		int count = 0;
		int windowSize = pat.size();
		for (int i = 0; i < static_cast<int>(txt.size()); i++) {
			window[static_cast<unsigned char>(txt[i])]++;
			if (i >= windowSize) {
				window[static_cast<unsigned char>(txt[i - windowSize])]--;
			}
			if (i >= windowSize - 1 && window == required) {
				count++;
			}
		}
		return count;
	}
};


// Question: Count Occurrences of Anagrams
// Summary: Count the substrings of a text that are anagrams of a given pattern.
// Example:
// Input: text = "forxxorfxdofr", pattern = "for"
// Output: 3
// Explanation: The anagram windows are "for", "orf", and "ofr".


