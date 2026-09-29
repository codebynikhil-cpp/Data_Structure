// URL: https://leetcode.com/problems/fruit-into-baskets/
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int, int> mp;
        int left = 0, right = 0;
        int res = 0;
        while(right < n){
            mp[fruits[right]]++;
            if(mp.size() > 2){
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0) mp.erase(fruits[left]);
                left++;
            }
            res = max(res, right - left + 1);
            right++;
        }
        return res;
    }
};

// Summary:
// Find the longest subarray containing at most two distinct values.
// Example: fruits = [1,2,1], answer is 3 because all fruits fit within two baskets.

