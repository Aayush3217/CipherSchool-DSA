// Link : https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

class Solution {
  public:
    bool check(vector<int>& arr, int k, int mid){
        int count = 1;
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            if(sum+arr[i]>mid){
                count++;
                sum=arr[i];
            }else{
                sum += arr[i];
            }
        }
        if(count<=k) return true;
        return false;
    }
  
    int findPages(vector<int> &arr, int k) {
        if(arr.size()<k) return -1;
        
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(),0);
        int res = -1;
        
        while(low<=high){
            int mid = low+(high-low)/2;
            if(check(arr,k,mid)){
                res = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return res;
    }
};
