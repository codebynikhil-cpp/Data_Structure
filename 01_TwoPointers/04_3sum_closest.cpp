// URL: https://leetcode.com/problems/3sum-closest/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());
        int ressum = nums[0] + nums[1] + nums[2];
        int min_diff = abs(target - ressum);
        for(int i=0; i<n-2; i++){
            // if(i > 0 && nums[i]==nums[i-1]) continue;
            int left = i+1, right = n-1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                int diff = abs(target - sum);
                if(diff < min_diff){
                    min_diff = diff;
                    ressum = sum;
                }
                if(sum == target){
                    return sum;
                }
                if(sum < target) left++;
                else right--;
            }
        }
        return ressum;
    }
};