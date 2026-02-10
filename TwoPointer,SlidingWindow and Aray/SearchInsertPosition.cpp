// Link : https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int recursionSearch(vector<int>& nums, int target, int left, int right){
        if(left>right) return left;
        int mid = left + (right-left)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) return recursionSearch(nums, target, mid+1, right);
        else return recursionSearch(nums, target, left, mid-1);
    }
    int searchInsert(vector<int>& nums, int target) {
        return recursionSearch(nums, target, 0, nums.size()-1);
    }
};