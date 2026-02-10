// Link : https://www.geeksforgeeks.org/problems/second-largest3735/0 

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int first = INT_MIN;
        int second = INT_MIN;
    
        for(int i=0; i<n; i++){
            if(arr[i]>first){
                second = first;
                first = arr[i];
            }else if(arr[i]>second && arr[i]!=first){
                second = arr[i];
            }
        }
        return (second == INT_MIN) ? -1 : second;
    }
};