// URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        int left = 0, right = 0;
        int res = 0;
        while(right < n){
            mp[s[right]]++;
            while(mp[s[right]] > 1){
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

// Summary:
// Find the longest substring with no repeated characters.
// Example: s = "abcabcbb" -> the answer is 3 because "abc" is the longest unique substring.

