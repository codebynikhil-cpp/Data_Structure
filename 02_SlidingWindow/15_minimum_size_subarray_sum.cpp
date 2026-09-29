// URL: https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 0;
        int sum = 0;
        int MinResult = INT_MAX;
        while(right < n){
            sum += nums[right];
            while(sum >= target){
                int res = right - left + 1;
                MinResult = min(res, MinResult);
                sum -= nums[left];
                left++;
            }
            right++;
        }
        return MinResult == INT_MAX ? 0 : MinResult;
    }
};