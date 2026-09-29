#include <bits/stdc++.h>
using namespace std;

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

// Question: Fruit Into Baskets
// Summary: Find the longest contiguous subarray containing at most two distinct fruit types.
// Example:
// Input: fruits = [1, 2, 1]
// Output: 3
// Explanation: The complete array contains only two fruit types, so all three fruits can be collected.


