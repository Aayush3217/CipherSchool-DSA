// Link : https://leetcode.com/problems/binary-search/

class Solution {
public:
    int binarySearch(vector<int>& nums, int target){
        int lo = 0, hi = nums.size()-1;
        while(lo<=hi){
            int mid = lo + (hi-lo) / 2;
            if(nums[mid]==target) return mid;
            else if(nums[mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target);
    }
};