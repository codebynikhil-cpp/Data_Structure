// URL: https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n = s.size();
        unordered_map<char, int> mp;
        int left = 0, right = 0;
        int res = -1;
        while(right < n){
            mp[s[right]]++;
            while(mp.size() > k){
                mp[s[left]]--;
                if(mp[s[left]] == 0) mp.erase(s[left]);
                left++;
            }
            if(mp.size() == k){
                res = max(res, right - left + 1);
            }
            right++;
        }
        return res;
    }
};

// Summary:
// Find the longest substring containing exactly k distinct characters.
// Example: s = "aabacbebebe", k = 3 -> the longest valid window is "cbebebe" with length 7.

