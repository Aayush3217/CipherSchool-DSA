// Link : https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int i = 0, j = 0;
        int n = arr.size();
        int sum = 0;
        
        while(j<n){
            sum += arr[j];
            
            while(sum > target && i<=j){
                sum -= arr[i];
                i++;
            }
            if(sum == target){
                return {i+1, j+1};
            }
            j++;
        }
        return {-1};
    }
};