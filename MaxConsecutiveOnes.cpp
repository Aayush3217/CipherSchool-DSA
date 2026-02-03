// Link : https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxCount = INT_MIN;
        int count = 0;

        for(int i=0; i<n; i++){
            if(nums[i]==1) count++;
            else{
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        maxCount = max(maxCount , count);
        return maxCount;
    }
};