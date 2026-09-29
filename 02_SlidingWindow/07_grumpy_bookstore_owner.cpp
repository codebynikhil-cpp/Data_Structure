#include <bits/stdc++.h>
using namespace std;

// URL: https://leetcode.com/problems/grumpy-bookstore-owner/

class Solution {
public:
	int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
		int alwaysSatisfied = 0;
		int recoverable = 0;
		int bestRecoverable = 0;

		for (int i = 0; i < static_cast<int>(customers.size()); i++) {
			if (grumpy[i] == 0) {
				alwaysSatisfied += customers[i];
			} else {
				recoverable += customers[i];
			}
			if (i >= minutes && grumpy[i - minutes] == 1) {
				recoverable -= customers[i - minutes];
			}
			bestRecoverable = max(bestRecoverable, recoverable);
		}
		return alwaysSatisfied + bestRecoverable;
	}
};
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k = minutes;
        vector<int>& arr = customers;
        int n = arr.size();
        int prevLoss = 0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1) prevLoss += arr[i];
        }
        int maxLoss = prevLoss;
        int maxIdx = 0;
        int  i = 1;
        int j = k;
        while(j<n){
            int currLoss = prevLoss;
            if(grumpy[j]==1) currLoss += arr[j];
            if(grumpy[i-1]==1) currLoss -= arr[i-1];
            if(maxLoss < currLoss){
                maxLoss = currLoss;
                maxIdx = i;
            }
            prevLoss = currLoss;
            i++;
            j++;
        }
        //filling 0s in the grumpy array window
        for(int i=maxIdx;i<maxIdx+k;i++){
            grumpy[i] = 0;
        }
        //maximum satisfaction
        int sum = 0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) sum += arr[i];
        }
        return sum;
    }
};

// Question: Grumpy Bookstore Owner
// Summary: Maximize satisfied customers by choosing one interval of length minutes in which the owner uses a secret technique.
// Example:
// Input: customers = [1, 0, 1, 2, 1, 1, 7, 5], grumpy = [0, 1, 0, 1, 0, 1, 0, 1], minutes = 3
// Output: 16
// Explanation: Applying the technique during the best three-minute window makes 16 customers satisfied.


