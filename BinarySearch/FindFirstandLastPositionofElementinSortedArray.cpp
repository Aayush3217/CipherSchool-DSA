// Link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/1894580191/

class Solution {
public:
    int firstOcuurance(vector<int>& input, int target){
        int lo = 0;
        int hi = input.size()-1;
        int ans = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(input[mid] == target){
                ans = mid;
                hi = mid-1;  //search left
            }
            else if(input[mid]<target) lo = mid+1;
            else hi = mid-1;
        }
        return ans;
    }

    int lastOccurance(vector<int>& input, int target){
        int lo = 0;
        int hi = input.size()-1;
        int ans = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(input[mid] == target){
                ans = mid;
                lo = mid+1;  //search right
            }
            else if(input[mid]<target) lo = mid+1;
            else hi = mid-1;
        }
        return ans; 
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstOcuurance(nums, target), lastOccurance(nums, target)};
    }
};