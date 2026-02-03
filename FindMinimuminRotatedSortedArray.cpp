// Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {
public:
    int findPivot(vector<int>& nums, int n){
        int l = 0, r = n-1;
        while(l<r){
            int mid = l + (r-l)/2;
            if(nums[mid]>nums[r]) l = mid+1;
            else r = mid;
        }
        return r;
    }
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int idx =  findPivot(nums, n);
        return nums[idx];
    }
};