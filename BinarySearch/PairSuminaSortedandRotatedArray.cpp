// Link : https://www.geeksforgeeks.org/problems/pair-sum-in-a-sorted-and-rotated-array/1

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        int n = arr.size();
        int pivot = -1;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>arr[i+1]){
                pivot = i;
                break;
            }
        }
        
        
        // If no rotation
        if (pivot == -1) pivot = n - 1;
        
        int left = (pivot+1)%n;
        int right = pivot;
        
        while(left!=right){
            int sum = arr[left] + arr[right];
            if(sum==target) return true;
            else if(sum < target) left = (left+1)%n;
            else right = (right-1+n)%n;
        }
        return false;
    }
};