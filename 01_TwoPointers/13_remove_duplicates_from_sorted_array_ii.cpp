// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int idx = 1;
        bool flag = true;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                if(flag) nums[idx++] = nums[i];
                flag = false;
                
            }else{
                nums[idx++] = nums[i];
                flag = true;
            }
        }
        return idx;
    }
};
    // idx
// 1 1 1 1 1
    //  i
    //  cnt = 0
    //  1