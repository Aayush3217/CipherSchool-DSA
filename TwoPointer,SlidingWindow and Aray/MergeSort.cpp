// Link : https://www.geeksforgeeks.org/problems/merge-sort/1

class Solution {
  public:
    void mergeTwoSortedArray(vector<int>& arr, int l, int mid, int r){
        vector<int> res;
        int left = l;
        int right = mid+1;
       while (left <= mid && right <= r) {
            if (arr[left] <= arr[right]) {
                res.push_back(arr[left]);
                left++;
            } else {
                res.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            res.push_back(arr[left]);
            left++;
        }
        while(right<=r){
            res.push_back(arr[right]);
            right++;
        }
        
        // Copy back to original array
        for (int i = l; i <= r; i++) {
            arr[i] = res[i - l];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l<r){
            int mid = (l+r)/2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid+1, r);
            mergeTwoSortedArray(arr, l, mid, r);
        }
    }
};