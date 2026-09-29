// URL: https://leetcode.com/problems/get-equal-substrings-within-budget/
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int left = 0, right = 0;
        int cost = 0, ans = 0;
        while(right < n){
            cost += abs((s[right]-'a') - (t[right]-'a')) ;
            while(cost > maxCost){
                cost -= abs((s[left]-'a') - (t[left]-'a'));;
                left++;
            }
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};