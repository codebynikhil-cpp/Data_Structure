// URL: https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1


class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        int n = arr.size();
        int i = 0, j = 1;
        
        sort(arr.begin(), arr.end());
        
        while(i<n && j<n){
            int diff = arr[j] - arr[i];
            if(diff == x && i!=j) return true;
            else if(diff < x) j++;
            else i++;
            // if(i==j) j++;
        }
        return false;
    }
};