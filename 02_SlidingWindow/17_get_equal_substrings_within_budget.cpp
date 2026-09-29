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

// Summary:
// Find the longest substring where the total cost to change one string into another is within budget.
// Example: s = "abcd", t = "acbe", maxCost = 1 -> the longest equal substring is length 4 with cost 1.

