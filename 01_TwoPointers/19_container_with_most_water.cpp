// URL: https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n  = arr.size();
        int left = 0 , right = n-1;
        int maxWater = 0;
        while(left < right){
            int height = min(arr[right], arr[left]);
            int width = right - left;
            maxWater = max(maxWater, height*width);
            if(arr[left] < arr[right]) left++;
            else right--;
        }
        return maxWater; 
    }
};
