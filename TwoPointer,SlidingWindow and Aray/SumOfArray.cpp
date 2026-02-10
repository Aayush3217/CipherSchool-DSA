// Link : https://www.geeksforgeeks.org/problems/sum-of-array2326/1

class Solution {
  public:
    int solve(vector<int>& arr, int n){
        if(n==0) return 0;
        return arr[n-1] + solve(arr, n-1);
    }
    int arraySum(vector<int>& arr) {
        int n = arr.size();
        return solve(arr,n);
    }
};