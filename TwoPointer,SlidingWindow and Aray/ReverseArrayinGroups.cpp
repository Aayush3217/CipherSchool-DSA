// Link : https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1

class Solution {
  public:
  void reverse(vector<int>& arr, int left, int right){
      while(left<right){
          swap(arr[left], arr[right]);
          left++;
          right--;
      }
  }
    void reverseInGroups(vector<int> &arr, int k) {
        int n = arr.size();
        for(int i=0; i<n; i+=k){
            int left = i;
            int right = min(i+k-1, n-1);
            reverse(arr, left, right);
        }
    }
};