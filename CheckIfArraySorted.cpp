// Link : https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/0

class Solution {
  public:
    bool checkSorted(vector<int>& arr, int left, int right){
        if(right >= arr.size()) return true;
        if(arr[left]>arr[right]) return false;
        checkSorted(arr, left+1, right+1);
    }
    bool isSorted(vector<int>& arr) {
        return checkSorted(arr, 0, 1);
    }
};