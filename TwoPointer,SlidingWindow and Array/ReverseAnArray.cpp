// Link : https://www.geeksforgeeks.org/problems/reverse-an-array/0

class Solution {
  public:
    void reverse(vector<int>& arr, int left, int right){
        if(left>=right) return;
        swap(arr[left], arr[right]);
        reverse(arr, left+1, right-1);
    }
    void reverseArray(vector<int> &arr) {
        int n = arr.size();
        reverse(arr,0,n-1);
    }
};