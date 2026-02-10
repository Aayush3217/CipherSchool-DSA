// Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/

class Solution {
public:
    int findPivot(vector<int>& nums){
        int n = nums.size();
        int left = 0, right = n-1;

        while(left<right){
            while(left<right && nums[left]==nums[left+1]) left++;
            while(left<right && nums[right]==nums[right-1]) right--;

            int mid = left + (right-left)/2;
            if(nums[mid]>nums[right]) left = mid+1;
            else right = mid;
        }
        return right;
    }

    int findMin(vector<int>& nums) {
        int idx =  findPivot(nums);
        return nums[idx];
    }
};