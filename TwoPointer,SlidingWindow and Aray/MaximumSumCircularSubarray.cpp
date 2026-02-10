// Link : https://leetcode.com/problems/maximum-sum-circular-subarray/

class Solution {
public: 
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = INT_MIN, currMax = 0;
        int minSum = INT_MAX, currMin = 0;
        int total = 0;

        for(int x : nums){
            currMax = max(x, currMax+x);
            maxSum = max(maxSum, currMax);

            currMin = min(x, currMin+x);
            minSum = min(minSum, currMin);

            total += x;
        }

        if(maxSum < 0) return maxSum; // all number are negative
        return max(maxSum, total-minSum);
    }
};