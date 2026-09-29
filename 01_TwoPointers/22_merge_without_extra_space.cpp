// URL: https://www.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size(), m = b.size();
        int left = n-1, right = 0;
        
        while(left >= 0 && right < m){
            if(a[left] > b[right]){
                swap(a[left], b[right]);
            }
            left--;
            right++;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};
